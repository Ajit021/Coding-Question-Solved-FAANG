class Solution {
public:
    void c(string temp,string &digits,int i,vector<vector<char>>&digitMap,vector<string>&v){
        if(digits[i]==NULL){
            v.push_back(temp);
           // cout<<temp;
            return;
        }
        
        for(int j=0;j<digitMap[digits[i]-'2'].size();j++){
            c(temp+digitMap[digits[i]-'2'][j],digits,i+1,digitMap,v);
        }
        
        
    }
    vector<string> letterCombinations(string digits) {
        vector<vector<char>>digitMap;
        digitMap.push_back({'a','b','c'});
        digitMap.push_back({'d','e','f'});
        digitMap.push_back({'g','h','i'});
        digitMap.push_back({'j','k','l'});
        digitMap.push_back({'m','n','o'});
        digitMap.push_back({'p','q','r','s'});
        digitMap.push_back({'t','u','v'});
        digitMap.push_back({'w','x','y','z'});


        
        vector<string>v;
        if(digits.size()==0)
            return v;
        int i=0;
        c("",digits,i,digitMap,v);
        return v;
        
    }
};