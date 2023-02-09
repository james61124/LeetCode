class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0, end = 0;
        int t_condition = t.size();
        int min_window_size = 100000;
        int min_window_start = 100000;
        int find_answer = 0;
        unordered_map<char, int>mp;
        for(auto c : t){
            mp[c]++;
        }
        while(end<s.size()){
            if(mp[s[end]]>0) t_condition--;
            mp[s[end]]--;
            end++;
            while(t_condition==0){
                find_answer = 1;
                if(end-start<min_window_size){
                    min_window_size = end-start;
                    min_window_start = start;
                }
                if(mp[s[start]]==0) t_condition++;
                mp[s[start]]++;
                start++;
            }
            
        }
        if(find_answer==0) return "";
        else return s.substr(min_window_start,min_window_size);   
    }
};