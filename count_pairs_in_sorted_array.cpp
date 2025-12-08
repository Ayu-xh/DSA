// User function Template for C++
#include <vector>
using std::vector;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        int count=0;
        int i=0, j=arr.size()-1;
        
        while(i<j){
            if (arr[i]+arr[j] >= target){
                j--;
            }
            
            else {
                count += j-i;
                i++;
            }
        }
        
        return count;
    }
};
