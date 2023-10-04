#include <limits.h>
class Solution {
public:
    int cal(vector <int> v,int m)
    {
        int q=v.size();
        int s=0;
        for(int i=0;i<q;i++)
        {
            s+=ceil((double)v[i]/(double) m);
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int t) 
    {
        int n=nums.size();
        if(n>t) return -1;
        int min=1, max=*max_element(nums.begin(),nums.end());
        while(min<=max)
        {
            int m=(min+max)/2;
            int a=cal(nums,m);
            if(a<=t) { max=m-1;}
            else min=m+1;
        }
        return min;
    }
};