class Solution {
public:
    bool ansresult=false;
    int getMatrixNum(int i,int j){

         if(i>=0 && i<3){

            if(j>=0 && j<3)

                return 0;

            if(j>=3 && j<6)

                return 1;

            if(j>=6 && j<9)

                return 2;

        }

        if(i>=3 && i<6)

        {

            if(j>=0 && j<3)

                return 3;

            if(j>=3 && j<6)

                return 4;

            if(j>=6 && j<9)

                return 5;

        }

        if(i>=6 && i<9)

        {

            if(j>=0 && j<3)

                return 6;

            if(j>=3 && j<6)

                return 7;

            if(j>=6 && j<9)

                return 8;

        }

        
        return -1;
        
}

void ss(vector<vector<char>>& board,int i,int j,vector<vector<int>>& rowfreq,vector<vector<int>>& colfreq,vector<vector<int>>& matfreq,vector<vector<char>>& ans){
             
       if(ansresult)
           return;
 
      
        if(i==9){
             ans=board;
            ansresult=true;
 
            return;
 
        }
    
        
        if(board[i][j]!='.'){
       
           
            if(j<8){
                ss(board,i,j+1,rowfreq,colfreq,matfreq,ans);
            }
            else{
                ss(board,i+1,0,rowfreq,colfreq,matfreq,ans);
               
            }
         
             return;
        }
   
    
        int matrixnum=getMatrixNum(i,j);
        for(int val=1;val<=9;val++){
            
    if(rowfreq[i][val-1]==0  && colfreq[j][val-1]==0 && matfreq[matrixnum][val-1]==0)  {
                
               
                board[i][j]=('0'+val);
      
                rowfreq[i][val-1]=1;
                colfreq[j][val-1]=1;
                matfreq[matrixnum][val-1]=1;
    
     
            if(j<8){
               
                ss(board,i,j+1,rowfreq,colfreq,matfreq,ans);
                
            }
           else{
               ss(board,i+1,0,rowfreq,colfreq,matfreq,ans);
           }
            board[i][j]='.';
            rowfreq[i][val-1]=0;
            colfreq[j][val-1]=0;
            matfreq[matrixnum][val-1]=0;
          }} }
    
    
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<char>>ans;
        vector<vector<int>>rowfreq;
        vector<vector<int>>colfreq;
        vector<vector<int>>matfreq;
        
        
        for(int i=0;i<9;i++){
            vector<int>v(9,0);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    
                    v[(board[i][j]-'0')-1]++;
                }
            }
            rowfreq.push_back(v);
        }
        
        for(int j=0;j<9;j++){
            vector<int>v(9,0);
            for(int i=0;i<9;i++){
                if(board[i][j]!='.'){
                    v[(board[i][j]-'0')-1]++;
                }
            }
            colfreq.push_back(v);
        }
        
        
         for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                vector<int>v(9,0);
                
                 for(int i1=i;i1<i+3;i1++)
                     for(int j1=j;j1<j+3;j1++){
                //         if(board[i1][j1]!='.'){
                //             v[(board[i1][j1]-'0')-1]++;
                //         }
                //     }
                //       matfreq.push_back(v);
                    
                
              
                
//             }
//         }


      //  for(int i=0;i<9;i+=3)
 
   //     {
 
//             for(int j=0;j<9;j+=3)
 
//             {
 
      //          vector<int> v(9,0);
 
               // for(int a=i;a<i+3;a++)
 
                   // for(int b=j;b<j+3;b++)
 
               //     {
 
                        if(board[i1][j1]!='.')
 
                        v[(board[i1][j1]-'0')-1]++;
 
                    }
 
                matfreq.push_back(v);
 
            }
 
        }
       
        ss(board,0,0,rowfreq,colfreq,matfreq,ans);
        board=ans;
        
        
        
        
    }

};