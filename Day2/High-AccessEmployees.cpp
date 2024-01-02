#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool container(vector<string>v){
        if(v.size()<3)
        return false;
        for(int i=0;i<v.size()-2;i++){
            int temp1=stoi(v[i]);
            int temp2=stoi(v[i+2]);
            if(temp2-temp1<100)
            return true;
        }
        return false;
    }
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
      unordered_map<string ,vector<string>>mpp;
      vector<string>ans;
      for(auto it:access_times)
      mpp[it[0]].push_back(it[1]);

      for(auto x:mpp){
          string key=x.first;
          sort(mpp[key].begin(),mpp[key].end());
          if(container(mpp[key]))
          ans.push_back(key);
      }
      return ans;
    }
};
