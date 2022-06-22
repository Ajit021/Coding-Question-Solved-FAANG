class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        int l=0;
        int h=n-1;
        if(n==1)
            return 0;
        
        while(l<=h){
            int m=(l+h)/2;
            
            if(m==0){
                if (a[m]>a[m+1])
                return m;
                
                else{
                   l=m+1;
                }
            }
            
            else if(m==n-1){
                if (a[m]>a[m-1])
                return m;
                
                else{
                   h=m-1;
                }
            }
            
            else if(a[m]>a[m-1]  && a[m]>a[m+1])
            {
                return m;
            }
            else if(a[m]<a[m-1])
                h=m-1;
            else if(a[m]<a[m+1])
                l=m+1;
            
            
            
            
            
              
            
        }
        return -1;
        
        
    }
};