class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_substr_size = 0;
        for(int i=0;i<s.length();i++){
            int substr_size = 1;
            map<char,int>check;
            check[s[i]] = 1;
            for(int j=i+1;j<s.length();j++){
                if(check[s[j]]==1){
                    break;
                }
                check[s[j]] = 1;
                substr_size++;
            }
            if(substr_size>max_substr_size){
                max_substr_size = substr_size;
            }
        }
        return max_substr_size;
    }
};