class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int first = -1;
        int second = -1;
        if(intervals.size()==0){
            return vector<vector<int>>(1, newInterval);
        }
        for(int i=0;i<intervals.size();i++){
            if(first==-1){
                if(newInterval[0] <= intervals[i][1]){
                    first = min(newInterval[0], intervals[i][0]);
                    i--;
                    continue;
                }
                ans.push_back(intervals[i]);
            }else if(second==-1){
                if(newInterval[1] < intervals[i][0]){
                    second = newInterval[1];
                    ans.push_back(vector<int>{first, second});
                    ans.push_back(intervals[i]);
                }else if(newInterval[1] < intervals[i][1]){
                    second = max(newInterval[1], intervals[i][1]);
                    ans.push_back(vector<int>{first, second});
                }
            }else{
                ans.push_back(intervals[i]);
            }
            
        }
        if(first!=-1 && second==-1) ans.push_back(vector<int>{first, newInterval[1]});
        if(first==-1 && second==-1) ans.push_back(newInterval);
        return ans;
    }
};