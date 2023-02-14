class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>mystack;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int num2 = mystack.top();
                mystack.pop();
                int num1 = mystack.top();
                mystack.pop();
                if(tokens[i]=="+"){
                    int ans = num1 + num2;
                    mystack.push(ans);
                }else if(tokens[i]=="-"){
                    int ans = num1 - num2;
                    mystack.push(ans);
                }else if(tokens[i]=="*"){
                    int ans = num1 * num2;
                    mystack.push(ans);
                }else{
                    int ans = num1 / num2;
                    mystack.push(ans);
                }
            }else{
                int num = 0;
                int isneg = 0;
                int j = 0;
                if(tokens[i][0]=='-'){
                    isneg = 1;
                    j = 1;
                }
                for(;j<tokens[i].size();j++){
                    num = num * 10 + (tokens[i][j] - '0');
                }
                if(isneg) num = -num;
                mystack.push(num);
            }
        }
        return mystack.top();
    }
};