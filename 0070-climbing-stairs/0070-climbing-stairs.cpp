class Solution {
public:
    int climbStairs(int n) {
        vector<long long int>stair;
        stair.push_back(1);
        stair.push_back(2);
        for(int i=2;i<=n;i++){
            stair.push_back(stair[i-1]+stair[i-2]);
        }
        return stair[n-1];
    }
};