class Solution {
public:
     bool isSafe(int i, int j ,vector<vector<int>>a){
        int x=i-1;
        int y=j;
        int n=a[0].size();
        
        //Up
        while(x>=0){
            if(a[x][y]==1)
                return false;
            x--;
        }
        
       // Left Diagonal
        
        x=i-1;
        y=j-1;
        while(x>=0 && y>=0)
        {
            if(a[x][y]==1)
                  return false;
            x--;
            y--;
        }
        
        //Right Diagonal
        x=i-1;
        y=j+1;
        while(x>=0 && y<n){
            if(a[x][y]==1)
                  return false;
            x--;
            y++;
        }
        return true;
        
        
        
        
        
        
        
        
    }
    void pp(int r, vector<vector<int>>&a,int &count){
        
        if(r==a[0].size()){
            count++;
            return;
            
        }
        
        
        
        for(int i=0;i<a[0].size();i++){
            
            if(isSafe(r,i,a)){
                //cout<<r;
                a[r][i]=1;
                pp(r+1,a,count);
                a[r][i]=0;
                
            }

        }
        
        
        
    }
    
    int totalNQueens(int n) {
        vector<vector<int>>a(n,vector<int>(n,0));
        int r=0;
        int count=0;
        pp(r,a,count);
        return count;
    }
};