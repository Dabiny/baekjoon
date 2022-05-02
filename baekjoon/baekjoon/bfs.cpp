#include <iostream>
#include <queue>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int m, n, ny, nx, startx, starty, goalx, goaly;
int a[104][104];
bool visited[104][104];

void bfs(int y, int x)
{
    queue<int>q;
    visited[y][x] == 1;
    q.push(a[y][x]); //시작지점을 집어넣어야함
    
    while (q.size())
    {
        int u = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++) //상하좌우를 돌면서
        {
            ny = y + dy[i];
            nx = x + dx[i];
            
            if ( visited[ny][nx] == false)
            {
                a[ny][nx] = visited[ny][nx] + 1;
                q.push(a[ny][nx]);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    cin >> startx >> starty;
    cin >> goalx >> goaly;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j]; //바다 육지 입력
            
        }
    }
    
    for (int i = starty; i < goaly; i++)
    {
        for (int j = startx; j < goalx; j++)
        {
            if (!visited[i][j] && a[i][j] == 1)
            {
                bfs(i, j);
            }
        }
    }
}

