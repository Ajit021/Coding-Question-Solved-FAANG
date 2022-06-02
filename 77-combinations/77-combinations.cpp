class Solution {
public:
    void pp(int index,vector<vector<int>> & v, int n,int k,vector<int>&aux,int size){
        
      
        
        if(size==k){
            
            vector<int>q;
            for(int p=0;p<size;p++){
                q.push_back(aux[p]);
            }
            
            v.push_back(q);
            return;
        }
       
        for(int j=index;j<n;j++){
            aux[size]=j+1;
            
            pp(j+1,v,n,k,aux,size+1);
        }
        
        
        
        
        
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> v;
        int index=0;
        vector<int>a;
        // for(int i=0;i<n;i++){
        //     a.push_back(i+1);
        // }
        
       vector<int>aux(k+2);
        pp(index,v,n,k,aux,0);
        return v;
    }
};