#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int i=0, j=n-1;
        int choco = 0;
        
        while(i<j){
            if(arr[i]<arr[j]){
                choco = arr[j];
                j--;
            }
            else{
                choco = arr[i];
                i++;
            }
        }
        
        return arr[j];
    }
};
