class Solution {
public:
   
//     int getMatrixNum(int i,int j){

//          if(i>=0 && i<3)

//         {

//             if(j>=0 && j<3)

//                 return 0;

//             if(j>=3 && j<6)

//                 return 1;

//             if(j>=6 && j<9)

//                 return 2;

//         }

//         if(i>=3 && i<6)

//         {

//             if(j>=0 && j<3)

//                 return 3;

//             if(j>=3 && j<6)

//                 return 4;

//             if(j>=6 && j<9)

//                 return 5;

//         }

//         if(i>=6 && i<9)

//         {

//             if(j>=0 && j<3)

//                 return 6;

//             if(j>=3 && j<6)

//                 return 7;

//             if(j>=6 && j<9)

//                 return 8;

//         }

        
//         return -1;
        
// }

// void ss(vector<vector<char>> &board,int i,int j,vector<vector<int>>&rowfreq,vector<vector<int>>&colfreq,vector<vector<int>>&matfreq,vector<vector<char>>& ans,bool &ansresult){
             
       
//         if(ansresult){
            
//             return;
//             }
            
            
        
      
//         if(i==9){
//             cout<<"lll";
//             ansresult=true;
//             for(int p=0;p<9;p++){
//                 for(int q=0;q<9;q++){
//                     cout<<board[p][q]<<" ";
//                 }
                
//             }
//             ans=board;
//             return;
//         }
    
        
//         if(board[i][j]!='.'){
       
           
//             if(j<8){
//                 ss(board,i,j+1,rowfreq,colfreq,matfreq,ans,ansresult);
//             }
//             else{
//                 ss(board,i+1,0,rowfreq,colfreq,matfreq,ans,ansresult);
//                 cout<<"i"<<" "<<i;
//             }
         
//              return;
//         }
    
    
//         int matrixnum=getMatrixNum(i,j);
//         for(int val=1;val<=9;val++){
            
//     if(rowfreq[i][val-1]==0  && colfreq[j][val-1]==0 && matfreq[matrixnum][val-1]==0)  {
                
               
//                 board[i][j]=('0'+val);
//         cout<<val;
//                 rowfreq[i][val-1]=1;
//                 colfreq[j][val-1]=1;
//                 matfreq[matrixnum][val-1]=1;
    
     
//             if(j<8){
               
//                 ss(board,i,j+1,rowfreq,colfreq,matfreq,ans,ansresult);
                
//             }
//            else{
//                ss(board,i+1,0,rowfreq,colfreq,matfreq,ans,ansresult);
//            }
        
            
        
//                board[i][j]='.';
//                rowfreq[i][val-1]=0;
//                colfreq[j][val-1]=0;
//                matfreq[matrixnum][val-1]=0;
           
                
                
                
            
//         }
        
        
        
        
        
        
        
//     }
    
    
//     }
    
    
//     void solveSudoku(vector<vector<char>>& board) {
//         vector<vector<char>>ans;
//         vector<vector<int>>rowfreq;
//         vector<vector<int>>colfreq;
//         vector<vector<int>>matfreq;
        
        
//         for(int i=0;i<9;i++){
//             vector<int>v(9,0);
//             for(int j=0;j<9;j++){
//                 if(board[i][j]!='.'){
                    
//                     v[(board[i][j]-'0')-1]++;
//                 }
//             }
//             rowfreq.push_back(v);
//         }
        
//         for(int j=0;j<9;j++){
//             vector<int>v(9,0);
//             for(int i=0;i<9;i++){
//                 if(board[i][j]!='.'){
//                     v[(board[i][j]-'0')-1]++;
//                 }
//             }
//             colfreq.push_back(v);
//         }
        
        
//         for(int i=0;i<9;i+=3){
//             for(int j=0;j<9;j+=3){
//                 vector<int>v(9,0);
                
//                 for(int i1=i;i1<i+3;i1++){
//                     for(int j1=i;j1<j+3;j1++){
//                         if(board[i1][j1]!='.'){
//                             v[(board[i1][j1]-'0')-1]++;
//                         }
//                     }
                    
//                 }
//                 matfreq.push_back(v);
                
//             }
//         }
      
//     bool ansresult=false;
        
//       ss(board,0,0,rowfreq,colfreq,matfreq,ans,ansresult);
        
//       // board=ans;
        
        
        
        
        
        
//     }


    bool flag=false;

     int getMatNum(int i,int j)

     {

        if(i>=0 && i<3)

        {

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

    

    void solve(vector<vector<char>>& board,vector<vector<int> >&r,vector<vector<int> >&c,vector<vector<int> >&sm,int i,int j,vector<vector<char>>& ans)

    {

        if(flag)

            return;

        if(i==9)

        {
             ans=board;
            flag=true;

            return;

        }

        if(board[i][j]!='.')

        {

            if(j<8)

                solve(board,r,c,sm,i,j+1,ans);

            else

                solve(board,r,c,sm,i+1,0,ans);

            return;

        }

        int id=getMatNum(i,j);

        for(int v=1;v<=9;v++)

        {

            if(r[i][v-1]==0 && c[j][v-1] == 0 && sm[id][v-1]==0)

            {

                board[i][j]=('0'+v);

                r[i][v-1]=1;

                c[j][v-1]=1;

                sm[id][v-1]=1;

                if(j<8){

                solve(board,r,c,sm,i,j+1,ans);

                }

                if(j==8){

                solve(board,r,c,sm,i+1,0,ans);

                }

                board[i][j]='.';

                r[i][v-1]=0;

                c[j][v-1]=0;

                sm[id][v-1]=0;

            }

        }

 

    }

    void solveSudoku(vector<vector<char>>& board) {

        vector<vector<int>> r,c,sm;

        for(int i=0;i<9;i++)

        {

            vector<int> vec(9,0);

            for(int j=0;j<9;j++)

            {

                if(board[i][j]!='.')

                    vec[(board[i][j]-'0')-1]++;

            }

            r.push_back(vec);

        }

        for(int j=0;j<9;j++)

        {

            vector<int> vec(9,0);

            for(int i=0;i<9;i++)

            {

                if(board[i][j]!='.')

                    vec[(board[i][j]-'0')-1]++;

            }

            c.push_back(vec);

        }

        for(int i=0;i<9;i+=3)

        {

            for(int j=0;j<9;j+=3)

            {

                vector<int> vec(9,0);

                for(int a=i;a<i+3;a++)

                    for(int b=j;b<j+3;b++)

                    {

                        if(board[a][b]!='.')

                        vec[(board[a][b]-'0')-1]++;

                    }

                sm.push_back(vec);

            }

        }
vector<vector<char>> ans;
        solve(board,r,c,sm,0,0,ans);
        board=ans;

 

    }

};