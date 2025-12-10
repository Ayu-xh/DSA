#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        
        vector<int> v;
        for (int i=0; i<arr.size(); i++){
            if((i%2)==0){
                v.push_back(arr[i]);
            }
        }
        
        return v;
    }
};