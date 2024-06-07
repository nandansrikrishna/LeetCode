class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        rows = len(mat)
        cols = len(mat[0])
        saved = []

        for i in range(rows):
            for j in range(cols):
                if mat[i][j] == 0:
                    saved.append((i, j))
                else:
                    mat[i][j] = 'x'

        for i, j in saved:
            for dx, dy in (0, -1), (0, 1), (1, 0), (-1, 0):
                row = i + dx
                col = j + dy

                if 0 <= row < rows and 0 <= col < cols and mat[row][col] == 'x':
                    mat[row][col] = mat[i][j] + 1
                    saved.append((row, col))

        return mat