#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> seenNumbers;
        
        for(int i: arr){
            int complement = target - i;
            if (seenNumbers.count(complement)){
                return true;
            }
            
            seenNumbers.insert(i);
            
            
        }
        
        return false;
        
    }
};