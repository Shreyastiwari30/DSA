#include <bits/stdc++.h> 
vector<int> swapNumber(int x, int y) {
    swap(x,y);
    vector<int> ans;
    ans.push_back(x);
    ans.push_back(y);
    return ans;
}
