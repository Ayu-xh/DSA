#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        int evenSum = 0;
        int oddSum = 0;
        
        for (int i=0; i<N; i++){
            if (i % 2 == 0){
                oddSum += Arr[i];
            }
            
            else evenSum += Arr[i];
        }
        
        return {oddSum, evenSum};
    }
};