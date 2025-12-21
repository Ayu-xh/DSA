#include<bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int largest = 0;
        int second_largest = 0;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>largest){
                second_largest = largest;
                largest = arr[i];
            }
            
            else if(arr[i]>second_largest){
                second_largest = arr[i];
            }
        }
        
        return largest*second_largest;
    }
};