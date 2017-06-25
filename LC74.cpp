class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0)
            return false;
        int row=matrix.size(),col=matrix[0].size();
        int begin=0,end=row-1;
        while(begin<=end)
        {
            int mid=begin+(end-begin)/2;
            if(matrix[mid][col-1]>target)
                end=mid-1;
            else if(matrix[mid][col-1]<target)
                begin=mid+1;
            else
                return true;
        }
        //begin
        int pickedrow=begin;
        if(pickedrow==row)
            return false;
        begin=0,end=col-1;
        while(begin<=end)
        {
            int mid=begin+(end-begin)/2;
            if(matrix[pickedrow][mid]>target)
                end=mid-1;
            else if(matrix[pickedrow][mid]<target)
                begin=mid+1;
            else
                return true;
        }
        return false;
    }
};
