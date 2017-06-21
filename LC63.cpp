class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> path=obstacleGrid;
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        int flag=1;
        for(int i=0;i<m;i++)
        {
            if(obstacleGrid[i][0]==1)
                flag=0;
            path[i][0]=flag;
        }
        flag=1;
        for(int j=0;j<n;j++)
        {
            if(obstacleGrid[0][j]==1)
                flag=0;
            path[0][j]=flag;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(obstacleGrid[i][j]==1)
                    path[i][j]=0;
                else
                    path[i][j]=path[i-1][j]+path[i][j-1];
            }
        }
        return path[m-1][n-1];
    }
};
