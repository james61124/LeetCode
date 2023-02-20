class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 100000;
        for(int i=0;i<nums.size();i++){
            int front = i+1;
            int back = nums.size()-1;
            
            while(front<back){
                int sum = nums[i]+nums[front]+nums[back];
                int diff = abs(target-ans);
                // cout<<sum<<diff<<ans<<endl;
                if(sum<target){
                    front++;
                }else if(sum>target){
                    back--;
                }else{
                    return target;
                }
                if(abs(sum-target)<diff) ans = sum;
            }
        }
        return ans;
    }
};