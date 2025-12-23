#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:

    int divisibleBy4(string N) {
        // Your Code Here
        int counter = 0;
        string last_two_digits;
        for(int i=N.length()-1; i>=0; i--){
            if(counter<2){
                last_two_digits += N[i];
                counter++;
            }
            
            else{
                break;
            }
        }
        
        reverse(last_two_digits.begin(), last_two_digits.end());
        int final = stoi(last_two_digits);
        
        if(final % 4 == 0){
            return 1;
        }
        
        else return 0;
        
    }
};