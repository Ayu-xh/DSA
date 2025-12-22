#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long diagonals(int n) {
        // Your code goes here
        long long answer = (long long)n*(n-3)/2;
        return answer;
    }
};