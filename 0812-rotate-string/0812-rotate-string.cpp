class Solution {
public:
    bool rotateString(string s, string t) 
    {
        int n=s.length();
    for(int i=0;i<n;i++)
    {
        char k= s[n-1];
        s.pop_back();
        s=k+s;
        if(s==t) return true;
    }
    return false;
    }
};