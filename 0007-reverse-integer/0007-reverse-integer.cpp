class Solution {
public:
    int reverse(int x) {
        int j=x;
      
        long k=0;
        while(j)
        {
           
            k=k*10+j%10;
            j/=10;
            
        } 
       if(k>INT_MAX|| k<INT_MIN) return 0;
       else return int(k);
    }
};