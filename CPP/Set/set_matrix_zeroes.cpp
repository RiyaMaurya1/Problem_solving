class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();    // rows size
        int n = matrix[0].size(); // columns size
        set<pair<int, int>> se;
        for (int x = 0; x < m; x++)
        {
            for (int y = 0; y < n; y++)
            {
                if (matrix[x][y] == 0)
                {
                    se.insert({x, y});
                }
            }
        }
        for (auto cord : se)
        {
            int x = cord.first;
            int y = cord.second;

            for (int i = 0; i < n; i++)
            {
                matrix[x][i] = 0;
            }
            for (int j = 0; j < m; j++)
            {
                matrix[j][y] = 0;
            }
        }

        // time complexity :  O((m x n)x(m+n))
        // space complexity : O(m x n) [this is the space of set we made]
    }
};
