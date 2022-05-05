//#include <iostream>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int k, n, m, b, y, x, a[51][51], cnt;
//bool visited[51][51];
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
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m)
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
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> k;
//
//    while(k--)
//    {
//        fill(&a[0][0], &a[0][0] + 51 * 51, 0);
//        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
//        cnt = 0;
//        cin >> m >> n >> b;
//
//        for (int i = 0; i < b; i++)
//        {
//            cin >> x >> y;
//            a[y][x] = 1;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if ( a[i][j] == 1 && !visited[i][j])
//                {
//                    dfs(i,j);
//                    cnt++;
//                }
//            }
//        }
//
//        cout << cnt << "\n";
//    }
//    return 0;
//}
