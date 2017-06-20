class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> row(n,0);
        vector<vector<int>> result(n,row); 
        int num=1,rowstart=0,rowend=n-1,colstart=0,colend=n-1;
        while(rowstart<=rowend && colstart<=colend)
        {
            for(int j=colstart;j<=colend;j++)
            {
                result[rowstart][j]=num;
                num++;
            }
            rowstart++;
            for(int i=rowstart;i<=rowend;i++)
            {
                result[i][colend]=num;
                num++;
            }
            colend--;
            if(rowstart<=rowend)
                for(int j=colend;j>=colstart;j--)
                {
                    result[rowend][j]=num;
                    num++;
                }
            rowend--;
            if(colstart<=colend)
                for(int i=rowend;i>=rowstart;i--)
                {
                    result[i][colstart]=num;
                    num++;
                }
            colstart++;
        }
        return result;
    }
};
