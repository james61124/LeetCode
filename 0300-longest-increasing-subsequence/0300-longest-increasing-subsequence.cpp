class Solution {
public:
    vector<int>LIS;
    int recursive(vector<int>& nums, int index){
        // cout<<index<<endl;
        if(LIS[index]!=0){
            return LIS[index];
        }
        int max_index = 0;
        int max = 1;
        if(index==0){
            LIS[index] = 1;
            return 1;
        }else{
            for(int i=0;i<index;i++){
                int ans = recursive(nums,i);
                // cout<<index<<" "<<i<<" "<<ans<<endl;
                if(ans >= max && nums[i] < nums[index]){
                    max = ans;
                    max_index = i;
                }
            }
        }
        if(nums[index] > nums[max_index]){
            LIS[index] = max + 1;
            return max + 1;
        }else{
            LIS[index] = max;
            return max;
        }
    }
    int lengthOfLIS(vector<int>& nums) {
        LIS.resize(nums.size());
        for(int i=0;i<LIS.size();i++){
            LIS[i] = 0;
        }
        int ans = recursive(nums,nums.size()-1);
        for(int i=0;i<LIS.size();i++){
            cout<<LIS[i]<<" ";
        }
        int max = 0;
        for(int i=0;i<LIS.size();i++){
            if(LIS[i]>max){
                max = LIS[i];
            }
        }
        return max;
    }
};