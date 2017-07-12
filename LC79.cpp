class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        if(word.size()==0)
            return true;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(board[i][j]==word[0])
                    if(dfs(board,0,i,j,m,n,word)==true)
                        return true;
        return false;
    }
    bool dfs(vector<vector<char>>& board,int index,int row,int col,int m,int n,string& word)
    {
        if(index==word.size() || word.size()==1)
            return true;
        if(board[row][col]!=word[index])
            return false;
        char tmp=board[row][col];
        board[row][col]='0';
        if(row>0 && dfs(board,index+1,row-1,col,m,n,word) || col>0 && dfs(board,index+1,row,col-1,m,n,word) || row<m-1 && dfs(board,index+1,row+1,col,m,n,word) || col<n-1 && dfs(board,index+1,row,col+1,m,n,word))
            return true;
        board[row][col]=tmp;
        return false;
    }
};
