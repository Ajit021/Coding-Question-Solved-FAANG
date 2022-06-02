class Solution {
public:
    void pp(int n,int i,int j,int count,vector<char>temp,vector<string>&s){
        
        if(count==2*n){
            string s1="";
            for(int k=0;k<2*n;k++){
                s1+=temp[k];
            }
            
            
            //cout<<"checking";
            s.push_back(s1);
            return ;
        }
        
        if(i==j){
            temp[count]='(';
            //cout<<temp[count];
            pp(n,i+1,j,count+1,temp,s);
        }else if(i>j){
            if(i==n){
                temp[count]=')';
                pp(n,i,j+1,count+1,temp,s);
                
            }
            else{
                temp[count]='(';
                pp(n,i+1,j,count+1,temp,s);
                
                temp[count]=')';
                pp(n,i,j+1,count+1,temp,s);
            }
        }
        
        
        
        
    }
    vector<string> generateParenthesis(int n) {
        vector<char>temp(2*n);
        vector<string> s;
        int i=0,j=0,count=0;
        pp(n,i,j,count,temp,s);
        //s.push_back("()");
        return s;
    }
};