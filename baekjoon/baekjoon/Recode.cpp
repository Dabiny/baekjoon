#include <iostream>
#include <vector>
using namespace std;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int t, m, n, k, a[54][54], y, x, cnt;
bool visited[54][54];
vector<int> ans;
void dfs (int y, int x)
{
    if (visited[y][x])
        return;
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= n || nx < 0 || nx >= m)
            continue;
        if (visited[ny][nx] && a[ny][nx] == 0)
            continue;
        dfs(ny, nx);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof(a));
        memset(visited, 0, sizeof(visited));
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            a[y][x] = 1;
        }
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (!visited[i][j] && a[i][j] == 1)
                {
                    dfs(i,j);
                    cnt++;
                }
            }
        ans.push_back(cnt);
        cnt = 0;
    }
}
