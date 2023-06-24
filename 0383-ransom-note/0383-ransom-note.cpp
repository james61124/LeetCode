class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int>mp_magazine;
        map<char, int>mp_ransomNote;
        for(auto s : magazine){
            mp_magazine[s]++;
        }
        for(auto s : ransomNote){
            mp_ransomNote[s]++;
        }
        for (auto it = mp_ransomNote.begin(); it != mp_ransomNote.end(); ++it) {
            if(it->second>mp_magazine[it->first]){
                return false;
            }
        }
        return true;
        
    }
};