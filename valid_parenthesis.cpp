#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for (int i=0; i<s.length(); i++){
            if (s[i]=='[' || s[i]=='{' || s[i]=='('){
                st.push(s[i]);
            }
            
            else{
                if (st.empty()){
                    return false;
                }
                
                char stack_top = st.top();
                st.pop();
                if((s[i]==')' && stack_top!='(') ||
                (s[i]=='}' && stack_top!='{') ||
                (s[i]==']' && stack_top!='[')){
                    return false;
                }
            }
        }
        
        return st.empty();
        
    }
};