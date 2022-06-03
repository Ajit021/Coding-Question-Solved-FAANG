class Solution {
public:
    void pp(vector<vector<int>>&v,vector<int>&a,int target,int index,vector<int>&q){
        
        if(target<0 || index==a.size())
        {return;}
        
        if(target==0)
        {
            v.push_back(q);
            
            return;
        }
        
        if(a[index]<=target){
        q.push_back(a[index]);
        pp(v,a,target-a[index],index,q);
        q.pop_back();
        }
        
        pp(v,a,target, index+1,q) ;
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>>v;
        vector<int>q;
        int index=0;
        pp(v,a,target,index,q);
        
        return v;
    }
};