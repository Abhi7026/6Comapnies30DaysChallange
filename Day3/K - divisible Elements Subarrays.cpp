#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        unordered_set<string>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=0;
            string s="";
            for(int j=i;j<n;j++){
                if(nums[j]%p==0)
                count++;
                if(count<=k){
                    s+=nums[j];
                    ans.insert(s);
                }
            }
        }
        return ans.size();
    }
};
