class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0) return false;
        int j=x;
        long long f=0;
        while(j)
        {
            f=f*10+j%10;
            j/=10;
        }
        int a= (int) f;
        if(a==x)return true;
        else return false;
    }
};