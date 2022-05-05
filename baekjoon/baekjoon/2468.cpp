//#include <iostream>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, cnt = 1, a[101][101], b[101][101], visited[101][101], temp;
//
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
//        if (ny < 0 || ny >= n || nx < 0 || nx >= n)
//            continue;
//
//        if (!visited[ny][nx] && b[ny][nx] == 0)
//            dfs(ny, nx);
//    }
//    return;
//}
//
//int main()
//{
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> a[i][j]; //건물높이 정보
//
//    for (int h = 1; h < 101; h++)
//    {
//        fill (&visited[0][0], &visited[0][0] + 101 * 101 , 0);
//        temp = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (b[i][j] == 1)
//                    continue;
//                if (a[i][j] <= h) //건물높이보다 강수량이 높으면
//                    b[i][j] = 1;
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (b[i][j] == 0 && !visited[i][j])
//                {
//                    dfs(i,j);
//                    temp++;
//                }
//            }
//        }
//        cnt = max(cnt, temp);
//    }
//    cout << cnt << "\n";
//    return 0;
//}
