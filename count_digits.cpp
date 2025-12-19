#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countDigits(int n) {
        // code here
        int digits = 0;
        
        while(n!=0){
            digits++;
            n = n/10;
        }
        
        return digits;
    }
};