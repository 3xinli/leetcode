class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        return self.rowValid(board) and self.colValid(board) and self.squareValid(board)
        
    def rowValid(self, board):
        for row in board:
            if not self.isUnitValid(row):
                return False
        return True
        
    def colValid(self, board):
        for column in zip(*board):
            if not self.isUnitValid(column):
                return False
        return True
        
    def squareValid(self, board):
        for i in (0, 3, 6):
            for j in (0, 3, 6):
                square = [board[x][y] for x in range(i, i+3) for y in range(j, j+3)]
                if not self.isUnitValid(square):
                    return False
        return True
    
    def isUnitValid(self, unit):
        unit = [i for i in unit if i != '.']
        return len(unit) == len(set(unit))
    
        
        