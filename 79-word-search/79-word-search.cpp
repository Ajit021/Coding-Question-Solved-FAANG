class Solution {
public:
    bool isSafe(int i , int j,int m,int n){
        if(i>m-1 || j>n-1 || i<0 || j<0)
            return false;
        return true;
    }
    
    void pp(int i,int j, int m, int n, vector<vector<char>>& board,
           string& word,int index,vector<vector<int>>&isVis,bool& ans){
        
        
        if(index==word.length()){
            ans=true;
            return;
        }
        isVis[i][j]=1;
        
        if(isSafe(i,j+1,m,n) && isVis[i][j+1]==0 && board[i][j+1]==word[index]){
            pp(i,j+1,m,n,board,word,index+1,isVis,ans);
        }
        
        
        if(isSafe(i,j-1,m,n) && isVis[i][j-1]==0 && board[i][j-1]==word[index]){
            pp(i,j-1,m,n,board,word,index+1,isVis,ans);
        }
        
        if(isSafe(i+1,j,m,n) && isVis[i+1][j]==0 && board[i+1][j]==word[index]){
            pp(i+1,j,m,n,board,word,index+1,isVis,ans);
        }
        
        if(isSafe(i-1,j,m,n) && isVis[i-1][j]==0 && board[i-1][j]==word[index]){
            pp(i-1,j,m,n,board,word,index+1,isVis,ans);
        }
        
        isVis[i][j]=0;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>isVis(m,vector<int>(n,0));
        bool ans=false;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0])
                {
                    pp(i,j,m,n,board,word,1,isVis,ans);
                   // cout<<ans<<" ";
                    if(ans==true)
                        return true;
                }
            }
        }
        return false;
    }
};