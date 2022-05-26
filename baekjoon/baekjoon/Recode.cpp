#include <iostream>
using namespace std;
int r, c, k, visited[6][6];
char a[6][6];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int go (int y, int x)
{
    if (y == 0 && x == c - 1)
    {
        if (visited[y][x] == k)
            return 1;
        return 0;
    }
    int n = 0;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if (ny < 0 || ny >= r || nx < 0 || nx >= c || visited[ny][nx] || a[ny][nx] == 'T')
            continue;
        visited[ny][nx] = visited[y][x] + 1;
        n += go(ny, nx);
        visited[ny][nx] = 0;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> r >> c >> k;
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    
    visited[r-1][0] = 1;
    cout << go(r-1, 0) << "\n";
}
