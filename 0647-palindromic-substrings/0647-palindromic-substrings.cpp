class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int step = 0;
            while(i-step>=0 && i+step<s.size() && s[i-step]==s[i+step]){
                step++;
                ans++;
            }
            step = 0;
            while(i+1<s.size() && i+1+step<s.size() && i-step>=0 && s[i-step]==s[i+1+step]){
                step++;
                ans++;
            }
        }
        return ans;
    }
};