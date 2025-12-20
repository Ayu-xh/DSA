#include<bits/stdc++.h>
using namespace std;

/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string number = to_string(n);
        for(int i=0; i<number.length(); i++){
            if(number[i]=='0'){
                number[i] = '5';
            }
        }
        
        int original_number = stoi(number);
        return original_number;
    }
};