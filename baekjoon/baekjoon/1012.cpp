#include <iostream>
using namespace std;
const int MAX = 54;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int k, n, m, b, y, x, a[MAX][MAX], visited[MAX][MAX], cnt;

void dfs (int y, int x)
{
    visited[y][x] = 1;
    
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if (ny < 0 || ny >= n || nx < 0 || nx >= m)
            continue;
        if (visited[ny][nx] != 0 && a[ny][nx] == 0)
            continue;
        else
        {
            dfs(ny, nx);
        }
    }
}

int main()
{
    cin >> k;
    cin >> m >> n >> b;
    
    for (int i = 0; i < b; i++)
    {
        cin >> y >> x;
        a[y][x] = 1;
    }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && a[i][j] == 1)
            {
                cnt++;
                dfs(i,j);
            }
        }
}
