class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int a[10]={0};
        for(int i=0;i<board.size();i++)
        {
            memset(a,0,sizeof(a));
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]!='.')
                {
                    a[board[i][j]-'0']++;
                    if(a[board[i][j]-'0']==2)
                        return false;
                }
            }
        }
        for(int j=0;j<board[0].size();j++)
        {
            memset(a,0,sizeof(a));
            for(int i=0;i<board.size();i++)
            {
                if(board[i][j]!='.')
                {
                    a[board[i][j]-'0']++;
                    if(a[board[i][j]-'0']==2)
                        return false;
                }
            }
        }
        int p=0,q=0;
        while(p<3 && q<3)
        {
            memset(a,0,sizeof(a));
            for(int i=3*p;i<3*p+3;i++)
            {
                for(int j=3*q;j<3*q+3;j++)
                {
                    if(board[i][j]!='.')
                    {
                        a[board[i][j]-'0']++;
                        if(a[board[i][j]-'0']==2)
                            return false;  
                    }
                }
            }
            if(q<3)
                q++;
            if(q==3)
            {
                p++;
                q=0;
            }
        }
        return 1;
    }
};
