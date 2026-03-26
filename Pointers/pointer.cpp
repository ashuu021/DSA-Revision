// #include <iostream>
// using namespace std;

// int main() {
//     int a=10;
//     int *ptr =&a;
//     cout<<ptr<<"=="<<&a<<endl;
//     cout<<"value of a"<<*ptr;
//     return 0;
// }
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        long long total = 0;
        for (auto &row : grid)
            for (int x : row)
                total += x;

        // Row prefix
        vector<long long> rowPrefix(m, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                rowPrefix[i] += grid[i][j];
            if (i > 0) rowPrefix[i] += rowPrefix[i - 1];
        }

        // Column prefix
        vector<long long> colPrefix(n, 0);
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++)
                colPrefix[j] += grid[i][j];
            if (j > 0) colPrefix[j] += colPrefix[j - 1];
        }

        // full freq map
        unordered_map<int,int> fullFreq;
        for (auto &row : grid)
            for (int x : row)
                fullFreq[x]++;

        // ------------------ HORIZONTAL CUT ------------------
        unordered_map<int,int> topFreq;

        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                topFreq[val]++;
                fullFreq[val]--;
                if (fullFreq[val] == 0) fullFreq.erase(val);
            }

            long long topSum = rowPrefix[i];
            long long bottomSum = total - topSum;

            if (topSum == bottomSum) return true;

            long long diff = abs(topSum - bottomSum);

            if (topSum > bottomSum) {
                if (topFreq.count(diff)) {
                    int rows = i + 1, cols = n;

                    if (rows > 1 && cols > 1) return true;

                    if (rows == 1) {
                        if (grid[0][0] == diff || grid[0][n - 1] == diff)
                            return true;
                    }

                    if (cols == 1) {
                        if (grid[0][0] == diff || grid[rows - 1][0] == diff)
                            return true;
                    }
                }
            } else {
                if (fullFreq.count(diff)) {
                    int rows = m - (i + 1), cols = n;

                    if (rows > 1 && cols > 1) return true;

                    if (rows == 1) {
                        if (grid[m - 1][0] == diff || grid[m - 1][n - 1] == diff)
                            return true;
                    }

                    if (cols == 1) {
                        if (grid[i + 1][0] == diff || grid[m - 1][0] == diff)
                            return true;
                    }
                }
            }
        }

        // rebuild full freq
        fullFreq.clear();
        for (auto &row : grid)
            for (int x : row)
                fullFreq[x]++;

        // ------------------ VERTICAL CUT ------------------
        unordered_map<int,int> leftFreq;

        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m; i++) {
                int val = grid[i][j];
                leftFreq[val]++;
                fullFreq[val]--;
                if (fullFreq[val] == 0) fullFreq.erase(val);
            }

            long long leftSum = colPrefix[j];
            long long rightSum = total - leftSum;

            if (leftSum == rightSum) return true;

            long long diff = abs(leftSum - rightSum);

            if (leftSum > rightSum) {
                if (leftFreq.count(diff)) {
                    int rows = m, cols = j + 1;

                    if (rows > 1 && cols > 1) return true;

                    if (rows == 1) {
                        if (grid[0][0] == diff || grid[0][cols - 1] == diff)
                            return true;
                    }

                    if (cols == 1) {
                        if (grid[0][0] == diff || grid[m - 1][0] == diff)
                            return true;
                    }
                }
            } else {
                if (fullFreq.count(diff)) {
                    int rows = m, cols = n - (j + 1);

                    if (rows > 1 && cols > 1) return true;

                    if (rows == 1) {
                        if (grid[0][j + 1] == diff || grid[0][n - 1] == diff)
                            return true;
                    }

                    if (cols == 1) {
                        if (grid[0][j + 1] == diff || grid[m - 1][j + 1] == diff)
                            return true;
                    }
                }
            }
        }

        return false;
    }
};
