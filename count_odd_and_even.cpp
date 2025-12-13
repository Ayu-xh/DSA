#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int even = 0;
        int odd = 0;
        int n = arr.size();
        
        for (int i=0; i<n; i++){
            if ((arr[i] % 2)==0){
                even++;
            }
            else odd++;
        }
        
        return {odd, even};
    }
};