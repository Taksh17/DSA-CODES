class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        for i in range(len(board)):
            s=set()
            for j in range(len(board)):
                if("."==board[i][j]):
                    continue
                else:
                    if board[i][j] in s:
                        return False
                    else:
                        s.add(board[i][j])
        for j in range(len(board)):
            a=set()
            for i in range(len(board)):
                if(board[i][j]=="."):
                    continue
                else:
                    if board[i][j] in a:
                        return False
                    else:
                        a.add(board[i][j])
        for i in range(0,9,3):
            for j in range(0,9,3):
                p=set()
                for k in range(3):
                    for l in range(3):
                        value=board[i+k][j+l]
                        if (value=="."):
                            continue
                        else:
                            if value in p:
                                return False
                            else:
                                p.add(value)
        return True


        