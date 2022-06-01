class Solution {
public:
    bool flag = false;
    double myPow(double x, long n) {
        if(n==0)
            return 1;
        
        if(n<0){
            n=n*-1;
            x=1/x;
          }
        
        double y=myPow(x,n/2);
       
        if(n%2==0)
            return y*y;
      else
            return y*y*x;
        
        
    }
};