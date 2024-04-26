class Solution:
    def minFallingPathSum(self, grid: List[List[int]]) -> int:
        DP = [[0] * len(grid[0]) for _ in range(len(grid))]
        # first row
        for i in range(len(grid[0])):
            DP[0][i] = grid[0][i]

        # from second row onwards
        for row in range(1, len(grid)):
            for col in range(len(grid[0])):
                previous_row_min_not_in_col = min(DP[row-1][:col] + DP[row-1][col+1:])
                DP[row][col] = grid[row][col] + previous_row_min_not_in_col

        return min(DP[-1])
