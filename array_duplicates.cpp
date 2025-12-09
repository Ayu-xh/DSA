#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> v;
        int i=0, j=i+1, n=arr.size()-1;
        
        sort(arr.begin(), arr.end());
        while(j<=n){
            if (arr[i]!=arr[j]){
                i++;
                j++;
            }
            
            else{
                v.push_back(arr[i]);
                i++;
                j++;
            }
        }
        
        return v;
    }
};