#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int first = -1;
        int second = -1;
        int third = -1;
        
        if (arr.size()<3){
            return -1;
        }
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > first){
                third = second;
                second = first;
                first = arr[i];
            }
            
            else if (arr[i] > second){
                third = second;
                second = arr[i];
            }
            
            else if (arr[i]>third){
                third = arr[i];
            }
        }
        
        return third;
    }
};