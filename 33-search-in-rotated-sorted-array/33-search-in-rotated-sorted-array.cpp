class Solution {
public:
    int bs(vector<int>a,int k,int l, int h){
        
        while(l<=h){
            
            int m=(l+h)/2;
            if(a[m]==k)
                return m;
            else if(a[m]>k)
                h=m-1;
            else
                l=m+1;
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        if(n==1)
        {
            if(nums[n-1]==target)
                return (n-1);
            return -1;
        }
        
        int l=0;
        int h=n-1;
        int j=-1;
        
        while(l<=h){
            int m=(l+h)/2;
            
            if( nums[m]<=nums[n-1]){
                
              h=m-1;
                
            }
            else{
                if(nums[m]>nums[m+1]){
                    j=m;
                    break;
                }
                else{
                    l=m+1;
                }
            }
            
        }
        
        cout<<l<<h<<j<<n-1<<"\n";;
       
        if(l>h)
            return bs(nums,target,0,n-1);
        else if (target == nums[n-1])
            return n-1;
        else if(target>nums[n-1]){
            return bs(nums,target,0,j);
        }
        else{
            return bs(nums,target,j+1,n-1);
        }
        
        //return -1;
        
    
        
        
    }
};