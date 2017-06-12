class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        int n=digits.size();
        if(n==0)
            return result;
        map<char,string> check;
        check['2']="abc";
        check['3']="def";
        check['4']="ghi";
        check['5']="jkl";
        check['6']="mno";
        check['7']="pqrs";
        check['8']="tuv";
        check['9']="wxyz";
        dfs(check,result,digits,"",0,n);
        return result;
    }
    
    void dfs(map<char,string> check,vector<string> &result,string digits,string s,int h,int n)
    {
        if(h==n)
            result.push_back(s);
        for(int i=0;i<check[digits[h]].size();i++)
            dfs(check,result,digits,s+check[digits[h]][i],h+1,n);
    }
};
