class Solution:
    def maxCount(self, m, n, ops):
        if not ops:
            return m * n

        min_row, min_col = m, n

        for r, c in ops:
            min_row = min(min_row, r)
            min_col = min(min_col, c)

        return min_row * min_col
