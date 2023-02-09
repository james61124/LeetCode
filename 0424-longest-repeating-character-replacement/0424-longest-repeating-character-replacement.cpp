class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0, end=0;
        int max_freq = 0;
        unordered_map<char,int>mp;
        for(end=0;end<s.size();end++){
            mp[s[end]]++;
            max_freq = max(max_freq, mp[s[end]]);
            if(end-start+1-max_freq>k){
                mp[s[start]]--;
                start++;
            }
        }
        return end-start;
    }
};