#include<bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original_number = n;
        int sum_of_cubes = 0;
        
        while (n!=0){
            sum_of_cubes += ((n%10)*(n%10)*(n%10));
            n = n/10;
        }
        
        if (sum_of_cubes == original_number){
            return true;
        }
        else return false;
    }
};