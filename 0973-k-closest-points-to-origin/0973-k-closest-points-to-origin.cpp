class Solution {
public:
    static bool cmp(pair<int, vector<int>>a, pair<int, vector<int>>b){
        return a.first < b.first;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>>mp;
        vector<vector<int>>ans;
        for(auto point : points) {
            int dis = point[0] * point[0] + point[1] * point[1];
            mp.push_back(make_pair(dis, point));
        }
        sort(mp.begin(), mp.end(), cmp);
        int count = 0;
        for(auto child : mp){
            if(count>=k) break;
            ans.push_back(vector<int>{child.second[0], child.second[1]});
            count++;
        }
        return ans;
        
    }
};