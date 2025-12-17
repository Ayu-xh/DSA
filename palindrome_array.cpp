#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        bool result;
        int i=0, j=arr.size()-1;
        while (i < j){
            if (arr[i]==arr[j]){
                result = true;
                i++;
                j--;
            }
            
            else{
                result = false;
                break;
            }
        }
        
        return result;
    }
};
