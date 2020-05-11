class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int n = image.size(), m = image[0].size();
        bool visited[n + 1][m + 1];
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
        int temp = image[sr][sc];
        memset(visited, 0, sizeof(visited));
        visited[sr][sc] = true;
        queue<pair<int, int>> q;
        q.push(make_pair(sr, sc));
        while (!q.empty())
        {
            pair<int, int> p;
            p = q.front();
            q.pop();
            int u = p.first;
            int v = p.second;
            image[u][v] = newColor;

            for (int i = 0; i < 4; i++)
            {
                int row = u + dx[i];
                int col = v + dy[i];
                if (((row >= 0 && row < n) && (col >= 0 && col < m)) && (visited[row][col] == 0) && (image[row][col] == temp))
                {
                    visited[row][col] = 1;
                    q.push(make_pair(row, col));
                }
            }
        }
        return image;
    }
};