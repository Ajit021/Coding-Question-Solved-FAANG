class Solution {
public:
    void Rotateright(string &s,int i,int j){
        
        char temp=s[j];
        
        for(int m=j;m>i;m--){
            
            s[m]=s[m-1];
        }
        s[i]=temp;
        
        //cout<<s;
        
    }
    
    
    void Rotateleft(string &s,int i,int j){
        char temp=s[i];
        for(int m=i;m<j;m++){
            s[m]=s[m+1];
        }
        s[j]=temp;
        
    }
    void pp(int i,string & s,int &n,int k,int l,string& temp){
        
         if(i==l-1){
             n++;
             if(k==n){
                 temp=s;
                 //cout<<temp;
             }
             
             //cout<<n<<" "<<s<<"\n";
             return;
         } 
        
        for(int j=i;j<l;j++){
            Rotateright(s,i,j);
            pp(i+1,s,n,k,l,temp);
            Rotateleft(s,i,j);
        }
        
        
        
        
    }
    
    
    
    
    string getPermutation(int n, int k) {
        string s="";
        
        for(int i=1;i<=n;i++)
        {
            s+=to_string(i);
        }
      
        //string nn=to_string(n);
        int l=n;
        string temp="";
        n=0;
        // Rotateright(s,0,2);
        // cout<<s;
        // Rotateleft(s,0,2);
        // cout<<s;
        pp(0,s,n,k,l,temp);
        
        return temp;
        
    }
    
    
};