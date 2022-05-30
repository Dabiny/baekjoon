//#include <iostream>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, m, a[104][104], cnt;
//bool visited[104][104];
//void dfs (int y, int x)
//{
//    visited[y][x] = 1;
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])
//            continue;
//        if (a[ny][nx] == 1 && !visited[ny][nx])
//            dfs(ny, nx);
//    }
//    return;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> a[i][j];
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//        {
//            if (a[i][j] == 1 && !visited[i][j])
//            {
//                dfs(i,j);
//                cnt++;
//            }
//        }
//
//    cout << cnt << "\n";
//    return 0;
//}
