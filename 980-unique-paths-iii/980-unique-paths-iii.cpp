class Solution {
public:
 
      bool issafe(int i,int j,vector<vector<int>>& grid,int m,int n){
          if(i>m-1 || j>n-1 || i<0 || j<0 || grid[i][j]==-1)
              return false;
          
          else
         return true;
      }
    
    
    void pp(vector<vector<int>>& grid,int i,int j,int m,int n,vector<vector<int>>&isVisted,int &sum,int count,int &total,int curr){
    
        if(grid[i][j]==2)
            {
            if(count==curr)
                total++;
            return;
        }
        
       
        isVisted[i][j]=1;
        if(issafe(i+1,j,grid,m,n)  && isVisted[i+1][j]==0){
            pp(grid,i+1,j,m,n,isVisted,sum,count,total,curr+1);
        }
        if(issafe(i-1,j,grid,m,n)  && isVisted[i-1][j]==0){
           pp(grid,i-1,j,m,n,isVisted,sum,count,total,curr+1);
        }
        if(issafe(i,j+1,grid,m,n)  && isVisted[i][j+1]==0){
            pp(grid,i,j+1,m,n,isVisted,sum,count,total,curr+1);
        }
        if(issafe(i,j-1,grid,m,n)  && isVisted[i][j-1]==0){
            pp(grid,i,j-1,m,n,isVisted,sum,count,total,curr+1);
        }
        
        isVisted[i][j]=0;
        
     
        
        
        
        
        
        
        
    }
    
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int k,l;
        
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                     k=i;
                     l=j;
                    
                 }
                if(grid[i][j]==0 || grid[i][j]==2)
                {
                    count++;
                }
                
              
            }
        }
        
       
        int sum=0;
        
        vector<vector<int>>isVisted(m,vector<int> (n,0));
        int total=0;
        int cur=0;
        pp(grid,k,l,m,n,isVisted,sum,count,total,cur);
                                    
                                    
        return total;
        
        
        
    }
};