#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int row,col;
    int i=0,j=0;
    Solution(int m, int n) {
        row=m;
        col=n;
    }
    
    vector<int> flip() {
        vector<int>ans={i,j};
        if(j==col-1)
        i=(i+1)%row;
        j=(j+1)%col;
        return ans;
    }
    
    void reset() {
        
    }
};

