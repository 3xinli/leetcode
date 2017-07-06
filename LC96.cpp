class Solution {
public:
    int numTrees(int n) {
        if(n<=2)
            return n;
        int result=0;
        vector<int> bst={1,1,2};
        for(int i=3;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                result+=bst[j-1]*bst[i-j];
            bst.push_back(result);
            result=0;
        }
        return bst[n];
    }
};
