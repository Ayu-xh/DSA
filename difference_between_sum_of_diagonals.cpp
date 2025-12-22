#include <bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int primary = 0;
        int secondary = 0;
        
        for(int i=0; i<N; i++){
            primary += Grid[i][i];
            secondary += Grid[i][N-i-1];
        }
        
        int answer = abs(primary - secondary);
        
        return answer;
        
        
    }
};