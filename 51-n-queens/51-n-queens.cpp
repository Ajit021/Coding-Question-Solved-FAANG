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
    void pp(vector<vector<string>>&v,int r, vector<vector<int>>&a){
        
        if(r==a[0].size()){
            int n=a[0].size();
            vector<string>h;
           for(int i=0;i<n;i++){
               string s;
               for(int j=0;j<n;j++){
                   
                  
                   
                   if(a[i][j]==1){
                      s+="Q";
                       
                   }
                   else{
                       s+=".";
                       
                   }
               }
               h.push_back(s);
               
           }
            v.push_back(h);
            return;
            
        }
        
        
        
        for(int i=0;i<a[0].size();i++){
            
            if(isSafe(r,i,a)){
                //cout<<r;
                a[r][i]=1;
                pp(v,r+1,a);
                a[r][i]=0;
                
            }

        }
        
        
        
    }
    
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>v;
        vector<vector<int>>a(n,vector<int>(n,0));
        
        int r=0;
        pp(v,r,a);
        return v;
        
        
        
        
        
        
        
    }
};