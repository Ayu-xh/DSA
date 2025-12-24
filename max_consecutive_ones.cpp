#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxConsecBits(vector<int> &arr) {

    int maxCount = 0, count = 0, prev = -1;

    for (int num : arr) {
        if ((prev ^ num) == 0) {
            count++;
        } 
        
        else {
            maxCount = max(maxCount, count);
            count = 1;
        }
        prev = num;
    }

    return max(maxCount, count);
}
