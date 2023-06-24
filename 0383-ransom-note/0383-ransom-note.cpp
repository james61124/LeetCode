class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int>mp;
        for(auto s : magazine){
            mp[s]++;
        }
        for(auto s : ransomNote){
            mp[s]--;
            if(mp[s]<0) return false;
        }
        return true;
    }
};