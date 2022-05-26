class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n= nums.size();
        
        if(n<2)
            return 0;
        
        int mini=INT_MAX,maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        
        }
        
        
        if(mini==maxi)
            return 0;
        int gap=(maxi-mini)/(n-1);
        
        if((maxi-mini)%(n-1)!=0)
            gap++;
        
        int minArr[n],maxArr[n];
        
        for(int i=0;i<n;i++){
            minArr[i]=INT_MAX;
            maxArr[i]=INT_MIN;
        }
        
        
        for(int i=0;i<n;i++){
            int bkt=(nums[i]-mini)/gap;
            
            minArr[bkt]=min(minArr[bkt],nums[i]);
            maxArr[bkt]=max(maxArr[bkt],nums[i]);
        }
        
        int ans=INT_MIN,prev=INT_MIN;
        for(int i=0;i<n;i++){
            if(minArr[i]==INT_MAX)
                continue;
            if(prev==INT_MIN)
                prev=maxArr[i];
            else{
                ans=max(ans,minArr[i]-prev);
                prev=maxArr[i];
            }
            
        }
        
        return ans;
        
        
        
    }
};