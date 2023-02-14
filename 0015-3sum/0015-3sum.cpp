class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        for(int i=0;i<nums.size();i++){
            int j = i + 1;
            int k = nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>tmp{nums[i], nums[j], nums[k]};
                    ans.push_back(tmp);
                    while(j+1<nums.size() && nums[j]==tmp[1]) j++;
                    while(k-1>0 && nums[k]==tmp[0]) k--;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                }
            }
            while(i+1<nums.size() && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};