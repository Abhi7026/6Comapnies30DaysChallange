#include<stdio.h>
#include <climits>
using namespace std;
class Solution {
public:
int gcd(int a,int b){
    if(!b)
    return a;
    return gcd(b,a%b);
}
    int lcm(long long a,long long b){
        long long temp=(a/gcd(a,b))*b;
        if(temp>INT_MAX)
        return INT_MAX;
        return temp;
    }
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        int LCM=lcm(divisor1,divisor2);
        int ans=-1;
        int start=1,end=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            int div1=mid/divisor1;
            int div2=mid/divisor2;
            if(uniqueCnt1+uniqueCnt2<=mid-mid/LCM && uniqueCnt1<=mid-div1 && uniqueCnt2<=mid-div2){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};