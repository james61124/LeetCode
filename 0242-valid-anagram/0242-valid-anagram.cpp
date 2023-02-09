class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;
        int counter = s.size();
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]--;
            if(mp[t[i]]>=0) counter--;
            else counter = -1;
        }
        return counter==0 ? true : false;
    }
};