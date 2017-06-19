class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.size()==0)
            return result;
        int left=0,upper=0,right=matrix[0].size()-1,bottom=matrix.size()-1;
        int i=0,j=0,dir=0; //dir right0,down1,left2,up3
        while(i>=upper && i<=bottom && j>=left && j<=right)
        {
            result.push_back(matrix[i][j]);
            if(dir==0 && j<right)
                j++;
            else if(dir==0 && j==right)
            {
                dir=1;
                i++;
                upper++;
            }
            else if(dir==1 && i<bottom)
                i++;
            else if(dir==1 && i==bottom)
            {
                dir=2;
                j--;
                right--;
            }
            else if(dir==2 && j>left)
                j--;
            else if(dir==2 && j==left)
            {
                dir=3;
                i--;
                bottom--;
            }
            else if(dir==3 && i>upper)
                i--;
            else if(dir==3 && i==upper)
            {
                dir=0;
                j++;
                left++;
            }
        }
        return result;
    }
};
