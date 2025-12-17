#include<bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        // code here
        
        int total = 0;
        for (int i=0; i < N; i++){
            for (int j=0; j < M; j++){
                total += Grid[i][j];
            }
        }
        
        return total;
    }
};