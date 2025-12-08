// User function Template for C++
#include <bits/stdc++.h>
using std::vector;

class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Your code here
        int i=0, j=arr.size()-1;
        
        sort(arr.begin(), arr.end());
        while(i<j){
            if (arr[i]+arr[j] < target){
                i++;
            }
            
            else if (arr[i]+arr[j] > target){
                j--;
            }
            
            else {
                return {arr[i], arr[j]};
            }
            
        }
        
        return {};
    }
};