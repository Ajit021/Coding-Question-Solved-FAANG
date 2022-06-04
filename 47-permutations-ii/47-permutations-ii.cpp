class Solution {
public:
    void pp(vector<vector<int>>& a, vector<int>&v,int i){
        if(i==v.size()-1){
            a.push_back(v);
            return;
        }
        map<int,int>m;
        for(int j=i;j<v.size();j++){
            
            m[v[j]]++;
            if (m[v[j]]==1){
          
                swap(v[i],v[j]);
                pp(a,v,i+1);
                swap(v[i],v[j]);
                
                
                
            }
            //cout<<m[v[j]]<<" ";
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& v) {
        vector<vector<int>>a;
        int i=0;
      
        pp(a,v,i);
        return a;
        
    }
};