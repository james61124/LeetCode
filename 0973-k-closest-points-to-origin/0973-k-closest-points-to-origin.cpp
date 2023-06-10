class Solution {
public:
    struct CustomCompare {
        bool operator()(pair<int, vector<int>> a, pair<int, vector<int>> b) {
            return a.first > b.first;
        }
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>>mp;
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, CustomCompare> pq;
        vector<vector<int>>ans;
        for(auto point : points) {
            int dis = point[0] * point[0] + point[1] * point[1];
            pq.push(make_pair(dis, point));
            // mp.push_back(make_pair(dis, point));
        }
        // sort(mp.begin(), mp.end(), cmp);
        int count = 0;
        // for(auto child : mp){
        //     if(count>=k) break;
        //     ans.push_back(vector<int>{child.second[0], child.second[1]});
        //     count++;
        // }
        while (!pq.empty()) {
            if(count>=k) break;
            ans.push_back(pq.top().second);
            pq.pop();
            count++;
        }
        return ans;
        
    }
};