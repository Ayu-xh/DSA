#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int copy_num = n;
        int reverse_num=0;
        
        while(n!=0){
            reverse_num = (reverse_num*10) + (n%10);
            n = n/10;
        }
        
        if (reverse_num==copy_num){
            return true;
        }
        
        else return false;
    }
};