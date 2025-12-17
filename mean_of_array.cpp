#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int count = 0;
        int total = 0;
        int mean = 0;
        
        for(int i=0; i<arr.size(); i++){
            total += arr[i];
            count++;
        }
        
        mean = total/count;
        return mean;
    }
};