class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        for i in range(len(board)):
            a=set()
            for j in range(len(board)):
                if board[i][j]==".":
                    continue
                elif( board[i][j]) in a:
                    return False
                else:
                    a.add(board[i][j])
        for i in range(len(board)):
            b=set()
            for j in range(len(board)):
                if(board[j][i]=="."):
                    continue
                elif(board[j][i]) in b:
                    return False
                else:
                    b.add(board[j][i])
        for i in range(0,9,3):
            for j in range(0,9,3):
                c=set()
                for k in range(3):
                    for l in range(3):
                        if( board[i+k][j+l]=="."):
                            continue
                        elif( board[i+k][j+l]) in c:
                            return False
                        else:
                            c.add( board[i+k][j+l])
        return True

        