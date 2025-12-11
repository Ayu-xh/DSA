#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverse(const string& S) {
        // code here
        string reverse;
        stack<char> st;
        for (char it : S){
            st.push(it);
        }
        
        while(!st.empty()){
            reverse += st.top();
            st.pop();
        }
        
        return reverse;
    }
};