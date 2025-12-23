#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    bool checkValidity(int a, int b, int c) {
        // code here
        if ((a+b>c)&&(b+c>a)&&(a+c>b)){
            return true;
        }
        
        else return false;
    }
};