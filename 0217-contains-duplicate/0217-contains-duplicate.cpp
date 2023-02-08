class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>visit;
        for(int i=0;i<nums.size();i++){
            if(visit[nums[i]]==1) return true;
            visit[nums[i]] = 1;
        }
        return false;
    }
};