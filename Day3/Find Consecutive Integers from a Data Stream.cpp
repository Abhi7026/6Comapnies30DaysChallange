#include<bits/stdc++.h>
using namespace std;
class DataStream {
public:
   int count=0;
   int val,size;

    DataStream(int value, int k) {
       val=value;
       size=k; 
    }
    
    bool consec(int num) {
        if(num==val)
        count++;
        else
        count=0;
        if(count>=size)
        return true;
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
