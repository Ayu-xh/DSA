#include<bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int k = (n*(n+1))/2;
        return k*k;
    }
};