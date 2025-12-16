#include <bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int> result;
        for(int i=0; i<arr.size(); i++){
            if((i+1) == arr[i]){
                result.push_back(i+1);
            }
        }
        
        return result;
    }
};