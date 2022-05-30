class Solution {
public:
   //Using Bitmasking  
   
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int size = nums.size();
        int subset = 1<<size;
        vector<vector<int>>ans;
        for(int i=0;i<subset;i++){
            vector<int>v;
            for(int j=0;j<size;j++){
                
                if( (i & 1<<j )!=0){
                    v.push_back(nums[j]);
                }
                
            }
            ans.push_back(v);
        }
        
        return ans;
        
        
    }
};