//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//typedef pair<int, int> pi;
//int n, m, a[10][10];
//bool visited[10][10];
//vector<pi> v;
//void dfs (int y, int x)
//{
//    if (visited[y][x] || a[y][x] == 1)
//        return;
//
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
//        dfs(nx, ny);
//    }
//    return;
//}
//int go ()
//{
//    memset(visited, 0, sizeof(visited));
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//        {
//            if (a[i][j] == 2)
//                dfs(i,j);
//        }
//
//    int cnt = 0;
//
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < m; j++)
//        {
//            if (a[i][j] == 0 && !visited[i][j])
//                cnt++;
//        }
//
//    return cnt;
//}
//int main()
//{
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//        {
//            cin >> a[i][j];
//            if (a[i][j] == 0)
//                v.push_back(pi(i,j));
//
//        }
//
//    int ans = 0;
//
//    for (int i = 0; i < v.size(); i++)
//        for (int j = 0; j < i; j++)
//            for (int k = 0; k < j; k++)
//            {
//                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 1;
//
//                max(ans, go());
//
//                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 0;
//            }
//    cout << ans << "\n";
//    return 0;
//}
