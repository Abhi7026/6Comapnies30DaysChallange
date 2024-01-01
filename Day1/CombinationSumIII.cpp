#include<stdio.h>
#include<vector>
using namespace std;
class Solution {
public:
   void solve(int j,int k,int n,vector<vector<int>>&ans,vector<int>&v){
       if(n==0 && v.size()==k){
           ans.push_back(v);
           return;
       }
       for(int i=j;i<=9;i++){
           v.push_back(i);
           solve(i+1,k,n-i,ans,v);
           v.pop_back();
       }
   }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(1,k,n,ans,v);
        return ans;
    }
};