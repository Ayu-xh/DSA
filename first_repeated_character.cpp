#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        
        string result;
        int seen[26] = {0};
        for(int i=0; i<s.length(); i++){
            int index = s[i] - 'a';
            
            if (seen[index]==1){
                result += s[i];
                return result;
            }
            
            else seen[index]=1;
        }
        
        return "-1";
    }
};