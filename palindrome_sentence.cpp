#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string new_string;
        for(char c:s){
            if(isalnum(c)){
                new_string += tolower(c);
            }
        }
        
        int i=0;
        int j=new_string.length()-1;
        while (i<j){
            if(new_string[i]!=new_string[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};