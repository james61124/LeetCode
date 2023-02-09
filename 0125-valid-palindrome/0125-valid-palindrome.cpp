class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        while(start<s.size() && end>=0){
            while(isalpha(s[start])==0 && isdigit(s[start])==0){
                start++;
                if(start>=s.size()) break;
            }
            while(isalpha(s[end])==0 && isdigit(s[end])==0){
                end--;
                if(end<0) break;
            }
            if(start>=s.size() || end<0) break;
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};