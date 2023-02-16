class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set;
        int ans = 0;
        for(auto num : nums){
            set.insert(num);
        }
        for(auto num : nums){
            if(set.count(num-1)==0){
                int length = 1;
                for(int j=1;set.count(num+j)!=0;j++){
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};