class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int a[matrix.size()]={0},b[matrix[0].size()]={0};
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++)
                if(matrix[i][j]==0)
                {
                    a[i]=1;
                    break;
                }
        for(int j=0;j<matrix[0].size();j++)
            for(int i=0;i<matrix.size();i++)
                if(matrix[i][j]==0)
                {
                    b[j]=1;
                    break;
                }
        for(int i=0;i<matrix.size();i++)
            if(a[i]==1)
                for(int j=0;j<matrix[0].size();j++)
                    matrix[i][j]=0;
        for(int j=0;j<matrix[0].size();j++)
            if(b[j]==1)
                for(int i=0;i<matrix.size();i++)
                    matrix[i][j]=0;    
    }
};
