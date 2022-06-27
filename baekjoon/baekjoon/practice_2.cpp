//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, m, a[10][10];
//bool virus[10][10];
//vector<pair<int, int>> v;
//void dfs (int y, int x)
//{
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 1 || virus[ny][nx])
//            continue;
//        if (virus[ny][nx] == 0 && a[ny][nx] == 0)
//        {
//            virus[ny][nx] = 1;
//            dfs(ny, nx);
//        }
//    }
//    return;
//}
//int solve ()
//{
//    memset (virus, 0, sizeof(virus));
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (a[i][j] == 2)
//                dfs(i,j);
//    int cnt = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//           if (virus[i][j] == 0 && a[i][j] == 0)
//               cnt++;
//    return cnt;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//        {
//            cin >> a[i][j];
//            if (!a[i][j])
//                v.push_back({i,j});
//        }
//
//    int ans = 0;
//
//    for (int i = 0; i < v.size(); i++)
//        for (int j = 0; j < i; j++)
//            for (int k = 0; k < j; k++)
//            {
//                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 1;
//                ans = max(ans, solve());
//                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 0;
//            }
//}
