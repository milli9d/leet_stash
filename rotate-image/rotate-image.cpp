class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        if (rows != matrix[0].size()) {
            return;
        }

        for (int i = 0; i < rows / 2; i++) {
            for (int j = i; j < rows - i - 1u; j++) {
                // moves right on top
                int& top_left = matrix[i][j];
                // moves down on right edge
                int& top_right = matrix[j][rows - i - 1u];
                // moves left on bottom
                int& bottom_right = matrix[rows - i - 1][rows - j - 1];
                // moves top on left edge
                int& bottom_left = matrix[rows - j - 1][i];

                int temp = top_left;
                top_left = bottom_left;
                bottom_left = bottom_right;
                bottom_right = top_right;
                top_right = temp;
            }
        }
    }
};