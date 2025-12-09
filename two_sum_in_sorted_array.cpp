#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int i=0, j=arr.size()-1;
        
        while(i<j){
            if (arr[i]+arr[j] > target){
                j--;
            }
            
            else if (arr[i]+arr[j] < target){
                i++;
            }
            
            else{
                return {i+1, j+1};
            }
            
        }
        
        return {-1,-1};
    }
};