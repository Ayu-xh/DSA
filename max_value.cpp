#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Your code geos here.
        
        int i=0, j=arr.size()-1;
        int maxi = -1;
        while(i < j){
            int result = abs(i-j)*min(arr[i], arr[j]);
            if (result > maxi){
                maxi = result;
            }
            
            if (arr[i]<arr[j]){
                i++;
            }
            else {
                j--;
            }
        }
        
        return maxi;
        
    }
};