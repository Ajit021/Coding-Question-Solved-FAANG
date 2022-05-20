class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        
        int p[n];
        p[0]=nums[0];
        for(int i=1;i<n;i++){
            p[i]=min(p[i-1],nums[i]);
        }
        
        int s[n];
        s[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            s[i]=max(s[i+1],nums[i]);
        
        
        for(int i=1;i<n-1;i++)
            if(p[i-1]<nums[i] && nums[i]<s[i+1])
                  return true;
        return false;
        
        
    }
};