class Solution {
public:
    int maxArea(vector<int>& height) {
        // int max_area = 0;
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int area;
        //         if(height[i] >= height[j]){
        //             area = height[j]*(j-i);
        //         }else{
        //             area = height[i]*(j-i);
        //         }
        //         if(area>max_area){
        //             max_area = area;
        //         }
        //     }
        // }
        // return max_area;
        map<int,vector<int>>mp;
        set<int>index;
        for(int i=0;i<height.size();i++){
            mp[height[i]].push_back(i);
            index.insert(i);
            // cout<<i<<endl;
        }
        
        int max_area = 0;
        for(auto iter = mp.begin();iter!=mp.end();iter++){
            for(int j=0;j<iter->second.size();j++){
                // cout<<iter->first<<" "<<iter->second[j]<<endl;
                int max_index, area;
                auto index_iter_begin = index.begin();
                auto index_iter_end = index.rbegin();
                // index_iter_end = index_iter_end--;
                // cout<<"hehe "<<*index_iter_end<<endl;
                // for(auto iter = index.begin();iter!=index.end();iter++){
                //     index_iter_end = iter;
                // }
                if(abs(*index_iter_begin-iter->second[j])>=abs(*index_iter_end-iter->second[j])){
                    area = iter->first * abs(*index_iter_begin-iter->second[j]);
                }else{
                    area = iter->first * abs(*index_iter_end-iter->second[j]);
                }
                // cout<<"haha "<<*index_iter_begin<<" "<<iter->second[j]<<endl;
                // cout<<"haha "<<*index_iter_end<<" "<<iter->second[j]<<endl;
                // cout<<area<<endl;
                if(area>=max_area) max_area = area;
                index.erase(iter->second[j]);
            }
            
        }
        return max_area;
    }
};