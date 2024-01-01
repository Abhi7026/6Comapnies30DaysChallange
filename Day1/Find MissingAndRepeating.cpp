#include<stdio.h>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>v(n,0);
        int missing=0,rep=0;
        for(int i=0;i<n;i++)
        v[arr[i]-1]++;
        for(int i=0;i<n;i++){
            if(v[i]==0)
            missing=i+1;
            else if(v[i]==2)
            rep=i+1;
        }
        return {rep,missing};
    }
};