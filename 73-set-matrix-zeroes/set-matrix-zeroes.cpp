class Solution {
public:
    void setZeroes(vector<vector<int>>& mt) {
        int n = mt.size();        // rows
        int m = mt[0].size();     // columns

        vector<int> I(n, 0); // rows
        vector<int> J(m, 0); // columns

        // First pass: mark rows and columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mt[i][j] == 0) {
                    I[i] = -1;
                    J[j] = -1;
                }
            }
        }

        // Second pass: set zeroes
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (I[i] == -1 || J[j] == -1) {
                    mt[i][j] = 0;
                }
            }
        }
    }
};
