class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string s="";
        add(result,s,n,0);
        return result;
    }
    
    void add(vector<string> &result, string s, int left, int right)
    {
        if(left==0 && right==0)
            result.push_back(s);
        if(left)
            add(result,s+'(',left-1,right+1);
        if(right)
            add(result,s+')',left,right-1);
    }
};
