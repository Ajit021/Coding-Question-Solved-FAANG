class Solution {
public:
    int func(int x,vector<vector<int>>&a,int n){
    int count=0;
        
    int i=n-1,j=0;

        while(i>=0 && j<n)

        {

            if(a[i][j]>x)

            {       

                i--;

            }

            else

            {

                count+=(i+1);

                j++;

            }

        }
        return count;
        
        
}

int bs(vector<vector<int>>&a,int n, int mini,int maxi,int k){
    int low=mini;
    int high=maxi;
    
    while(low<=high){
        
        int mid=(low+high)/2;
      
        int m=func(mid,a,n);
        
        //cout<<mid <<" "<<m<<"\n";
        if(m<k){
            low=mid+1;
        }
        else{
            int cnt1=func(mid-1,a,n);
            if(cnt1<k)
                return mid;
            else
              high=mid-1;
        }
    }
    return -1;
}

    int kthSmallest(vector<vector<int>>& a, int k) {
        
        
        int n=a.size();
        
        int mini=a[0][0],maxi=a[n-1][n-1];
    
    
   
        return bs(a,n,mini,maxi,k);
    }
};