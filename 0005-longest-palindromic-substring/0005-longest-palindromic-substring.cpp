class Solution {
public:
    string longestPalindrome(string s) {
        
        int max_count = 0;
        string ans = "";
        if(s.length()==1){
            return s;
        }
        if(s.length()==2){
            if(s[0]==s[1]) return s;
            else{
                ans = ans + s[0];
                return ans;
            }
        }
        
        for(int i=1;i<s.length()-1;i++){
            int count = 1;
            while(s[i-count]==s[i+count]){
                count++;
                if(i-count<0 || i+count>=s.length()) break;
            }
            if(((count-1)*2+1)>=max_count){
                ans = "";
                for(int j=i-count+1;j<=i+count-1;j++){
                    ans = ans + s[j];
                }
                max_count = (count-1)*2+1;
            }
        }
        for(int i=0;i<s.length();i++){
            int count = 1;
            if(s[i]!=s[i+1]) continue;
            if(i+1+count<s.length() && i-count>=0){
                while(s[i-count]==s[i+1+count]){
                    count++;
                    if(i-count<0 || i+1+count>=s.length()) break;
                }
            }
            if(count*2>=max_count){
                ans = "";
                for(int j=i-count+1;j<=i+1+count-1;j++){
                    ans = ans + s[j];
                }
                max_count = count*2;
            }
        }
        return ans;
    }
};