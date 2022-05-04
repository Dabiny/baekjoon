//#include <iostream>
//using namespace std;
//const int MAX_N = 104;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, m, cnt, a[MAX_N][MAX_N], visited[MAX_N][MAX_N];
//
//void dfs (int y, int x)
//{
//    visited[y][x] = 1;
//    
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        
//        if (ny < 0 || ny <= n || nx < 0 || nx <= m)
//            continue;
//        
//        if (a[ny][nx] == 1 && !visited[ny][nx])
//            dfs(ny, nx);
//    }
//    return;
//}
//
//int main()
//{
//    cin >> n >> m;
//    
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> a[i][j];
//    
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (visited[i][j] == 0 && a[i][j] == 1)
//            {
//                cnt++;
//                dfs(i,j);
//            }
//        }
//    }
//}
//
//
