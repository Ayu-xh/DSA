#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distance(int x1, int y1, int x2, int y2) {
        int dx = x2 - x1;
        int dy = y2 - y1;
        
        return (int)round(sqrt(dx * dx + dy * dy));
    }
};