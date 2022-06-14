class Solution {
public:
    
    
    void pp(int i,vector<int>& nums,vector<vector<int>> &ans,int n){
        if(i==n){
            ans.push_back(nums);
            return;
        }
        
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            pp(i+1,nums,ans,n);
            swap(nums[i],nums[j]);        

        }
        
        
        
        
        
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        int n=nums.size();
        pp(i,nums,ans,n);
        
        return ans;
    }
};