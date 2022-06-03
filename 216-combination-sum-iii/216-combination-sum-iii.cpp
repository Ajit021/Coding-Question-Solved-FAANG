class Solution {
public:
       void pp(int index,vector<vector<int>> & v, int n,int k,vector<int>&aux,int size,int m){
        
      
        
        if(size==k){
            
            vector<int>q;
            for(int p=0;p<size;p++){
                q.push_back(aux[p]);
            }
            int count=m;
            for(int p=0;p<size;p++){
                count-=q[p];
            }
            if(count==0)
              v.push_back(q);
            
            return;
        }
       
        for(int j=index;j<n;j++){
            aux[size]=j+1;
            
            pp(j+1,v,n,k,aux,size+1,m);
        }
        
        
        
        
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> v;
        int index=0;
        vector<int>a;
        vector<int>aux(k+2);
        int m=n;
        n=9;
        pp(index,v,n,k,aux,0,m);
        return v;
    }
};