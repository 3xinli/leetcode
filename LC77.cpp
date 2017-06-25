class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> ele;
        dfs(n,k,result,ele,1);
        return result;
    }
    void dfs(int n,int k,vector<vector<int>> &result,vector<int> &ele,int start)
    {
        if(ele.size()==k)
        {
            result.push_back(ele);
            return;
        }
        for(int i=start;i<=n;i++)
        {
            ele.push_back(i);
            dfs(n,k,result,ele,i+1);
            ele.pop_back();
        }
    }
};
