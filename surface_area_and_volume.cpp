#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> find(int l, int b, int h) {
        // Code here
        int TSA = 2*(l*b + b*h + h*l);
        int volume = l*b*h;
        
        return {TSA, volume};
    }
};