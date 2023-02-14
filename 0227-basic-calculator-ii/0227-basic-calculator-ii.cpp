class Solution {
public:
    void calculate(stack<int>&mystack, char sign, int tmp){
        if(sign=='+') mystack.push(tmp);
        else if(sign=='-') mystack.push(-tmp);
        else if(sign=='*'){
            tmp = tmp * mystack.top();
            mystack.pop();
            mystack.push(tmp);
        }else{
            tmp = mystack.top() / tmp ;
            mystack.pop();
            mystack.push(tmp);
        }
    }
    
    int calculate(string s) {
        stack<int>mystack;
        int tmp = 0;
        char sign = '+';
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            if(isdigit(s[i])){
                tmp = tmp * 10 + (s[i] - '0');
            }else{
                calculate(mystack, sign, tmp);
                tmp = 0;
                sign = s[i];
                
            }
        }
        calculate(mystack, sign, tmp);
        int ans = 0;
        while(mystack.size()!=0){
            ans = ans + mystack.top();
            mystack.pop();
        }
        return ans;
    }
};