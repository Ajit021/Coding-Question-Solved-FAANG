class Solution {
public:
    int count=0;
    void pp(vector<int>&v,int n,int i){
        if(i==n){
            int c=0;
        
            count++;
            
            return;
          
        }
        
        for(int j=i;j<n;j++){

           if  ( ( (v[j]%(i+1)==0) || ((i+1)%v[j])==0) ){
          
                swap(v[i],v[j]);
                pp(v,n,i+1);
                swap(v[i],v[j]);
                 
            
                
            }
        }
        
    }
    
    
    int countArrangement(int n) {
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
   
        pp(v,n,0);
        
        return count;
    }
};