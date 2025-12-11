#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        stack<int> temp;
        int k = floor((s.size()+1)/2);
        int count = s.size();
        while(count != 0){
            if (count == k){
                s.pop();
                count--;
            }
            
            else{
                temp.push(s.top());
                s.pop();
                count--;
            }
        }
        
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
};