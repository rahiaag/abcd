class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for (int i=0;i<s.size();i++){
            if (s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }
            else{
                if (st.empty()){   // checking the case where the remaining element is a closing bracket as when we get a valid parenthesis
                // we just poped it out
                    return false;
                }
                if (s[i]==')' && st.top()!='(' || s[i]=='}' && st.top()!='{' ||s[i]==']' && st.top()!='[' )
                return false;

                st.pop();
            }
        }
        return st.empty();
    }
};