#include<bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int result;
        for(int i=0; i<arr.size(); i++){
            result += arr[i];
        }
        
        return result;
    }
};