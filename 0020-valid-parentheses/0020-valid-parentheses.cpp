class Solution {
public:
    bool isValid(string s) {
        stack<char>mystack;
        for(auto c : s){
            if(mystack.size()>0){
                if(c==')'){
                    if(mystack.top()=='('){
                        mystack.pop();
                        continue;
                    }
                }
                if(c=='}'){
                    if(mystack.top()=='{'){
                        mystack.pop();
                        continue;
                    }
                }
                if(c==']'){
                    if(mystack.top()=='['){
                        mystack.pop();
                        continue;
                    }
                }
            }
            mystack.push(c);
            
        }
        return mystack.size()!=0 ? false : true;
    }
};