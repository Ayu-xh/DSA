#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string getBinaryRep(int n) {
        // Write Your Code here
        return bitset<32>(n).to_string();
    }
};