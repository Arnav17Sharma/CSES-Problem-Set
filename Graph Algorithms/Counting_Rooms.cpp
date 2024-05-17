#include <iostream>
#include <vector>

using namespace std;
void dfs(int x, int y, vector<vector<char>> &grid, vector<vector<int>> &vis)
{
    vis[x][y] = 1;
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    for (int i = 0; i < 4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if (new_x < 0 || new_x >= grid.size() || new_y < 0 || new_y >= grid[0].size())
            continue;
        if (grid[new_x][new_y] == '.' && !vis[new_x][new_y])
        {
            dfs(new_x, new_y, grid, vis);
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, '-'));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int count = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                count++;
                dfs(i, j, grid, vis);
            }
        }
    }
    cout << count;
}

int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}