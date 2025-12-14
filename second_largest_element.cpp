#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi = -1, second_maxi = -1;
        
        for (int i=0; i<arr.size(); i++){
            if (arr[i]>maxi){
                second_maxi = maxi;
                maxi = arr[i];
            }
            
            if (arr[i]<maxi && arr[i]>second_maxi){
                second_maxi = arr[i];
            }
        }
        
        return second_maxi;
    }
};