#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int sum_of_ap(int n, int a, int d) {
        // Code here.
        int last_term = a + ((n-1)*d);
        int int_sum = a + last_term;
        int sum = (n*int_sum)/2;
        return sum;
    }
};