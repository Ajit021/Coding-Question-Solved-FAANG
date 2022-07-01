class Solution {
public:
    long long bs(long long num){
    for(int i=63;i>=1;i--){
        long long l=2,h=num-1;
        while(l<=h){
            long long m=(l+h)/2;
            long long val=0,x=1,flag=0;
            for(int j=0;j<=i;j++){
                val+=x;
                if(val>=num)
                    break;
                if(j<i && (num-val)/x < m){
                    flag=1;
                    break;
                }
                if(j<i){
                    x*=m;
                }
            }
            
            if(val>num || flag==1)
                 h=m-1;
            else if(val<num)
                l=m+1;
            else 
                return m;
            
        }
    }
    return -1;
}
    string smallestGoodBase(string n) {
       long long int num = stoll(n);
        num=bs(num);
        
        return to_string(num);
        
    }
};