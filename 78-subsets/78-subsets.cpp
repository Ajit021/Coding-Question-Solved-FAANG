class Solution {
public:
    
    void pass(vector<int> nums,int i,vector<int> temp, int size,vector<vector<int>>&ans)
    {
        if(i == nums.size())
        {
            
            vector<int>d;
            for(int k=0;k<size;k++){
                d.push_back(temp[k]);
            }
            
            
            ans.push_back(d);
            return;
        }
        temp[size] = nums[i];
        pass(nums, i+1, temp, size+1,ans);
        pass(nums, i+1, temp,size,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> temp(n);
        vector<vector<int>> ans;
        pass(nums, 0, temp, 0,ans);
        return ans;
    }
};