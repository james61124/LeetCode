class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1;
        int num_zero = 0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) num_zero++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) sum = sum * nums[i];
        }
        if(num_zero==0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    ans.push_back(sum/nums[i]);
                }else{
                    ans.push_back(sum);
                }
            }
            
        }else if(num_zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans.push_back(sum);
                }else{
                    ans.push_back(0);
                }
            }
        }else{
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        
        return ans;
    }
};