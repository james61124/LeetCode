class Solution {
public:
    int maxArea(vector<int>& height) {
        map<int,vector<int>>mp;
        set<int>index;
        for(int i=0;i<height.size();i++){
            mp[height[i]].push_back(i);
            index.insert(i);
        }
        
        int max_area = 0;
        for(auto iter = mp.begin();iter!=mp.end();iter++){
            for(int j=0;j<iter->second.size();j++){
                int max_index, area;
                auto index_iter_begin = index.begin();
                auto index_iter_end = index.rbegin();
                if(abs(*index_iter_begin-iter->second[j])>=abs(*index_iter_end-iter->second[j])){
                    area = iter->first * abs(*index_iter_begin-iter->second[j]);
                }else{
                    area = iter->first * abs(*index_iter_end-iter->second[j]);
                }
                if(area>=max_area) max_area = area;
                index.erase(iter->second[j]);
            }
            
        }
        return max_area;
    }
};