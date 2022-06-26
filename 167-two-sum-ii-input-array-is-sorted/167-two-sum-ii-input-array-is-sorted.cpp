class Solution {
public:
    
  bool flag=false;
int bs(vector<int>& a,int l,int h,int k){
    
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==k){
            flag=true;
             return m;
        }
           
        else if (a[m]>k){
            h=m-1;
        }
        else{
           l=m+1; 
        }
    }
    return -1;
}  
    vector<int> twoSum(vector<int>& a, int s) {
    vector<int>v;
        
        int n=a.size();
        for(int i=0;i<n;i++){
            int k;
        
         k=s-a[i];
          
        int m=bs(a,i+1,n-1,k);
        if(flag==true){
            
            v.push_back(i+1);
            v.push_back(m+1);
            break;
        }
       }
        
        return v;
        
    }
};