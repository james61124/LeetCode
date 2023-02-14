
class Solution {
public:
    int reverse(int x) {
        try {
            string s = "";
            cout<<x<<endl;
            if(x<0){
                s = "-";
                
                if(x >= -2147483647) x = -x;
                else return 0;
            }
            while(x>0){
                int tmp = x % 10;
                s = s + to_string(tmp);
                x = x / 10;
            }
            return stoi(s);
        } catch (exception &e) { 
            return 0;
        }
        
    }
};