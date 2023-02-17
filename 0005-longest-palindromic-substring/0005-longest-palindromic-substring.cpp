class Solution {
public:
    string longestPalindrome(string s) {
        int ans = 0;
        int center = 0;
        int type = 0; // 0 even 1 odd
        for(int i=0;i<s.size();i++){
            int step = 0;
            while(i-step>=0 && i+step<s.size() && s[i-step]==s[i+step]){
                step++;
            }
            int length = 1+(step-1)*2;
            if(length > ans){
                ans = length;
                center = i;
                type = 1;
            }
            step = 0;
            while(i+1<s.size() && i-step>=0 && i+1+step<s.size() && s[i-step]==s[i+1+step]){
                step++;
            }
            length = step*2;
            if(length > ans){
                ans = length;
                center = i;
                type = 0;
            }
        }
        if(type==0){
            return s.substr(center-(ans/2-1), ans);
        }else{
            return s.substr(center-ans/2, ans);
        }
    }
};