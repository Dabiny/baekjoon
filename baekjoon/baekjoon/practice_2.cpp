//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, m, a[10][10];
//bool visited[10][10];
//vector<pair<int,int>> vec;
//void print()
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cout << a[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//void go (int y, int x)
//{
//    if (visited[y][x] || a[y][x] == 1)
//        return;
//    visited[y][x] = 1;
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m)
//            continue;
//        if (!visited[ny][nx] || a[ny][nx] == 0)
//            go (ny, nx);
//    }
//    return;
//}
//int solve()
//{
//    memset (visited, 0, sizeof(visited)); // 솔브가 호출될때마다 visited 초기화 해주고 들어가기
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (a[i][j] == 2)
//                go (i,j);
//    int cnt = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (visited[i][j] == 0 && a[i][j] == 0)
//                cnt++;
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
//                vec.push_back({i,j});
//        }
//    int ans = 0; //안전영역 최소값
//    for (int i = 0; i < vec.size(); i++)
//        for (int j = 0; j < i; j++)
//            for (int k = 0; k < j; k++)
//            {
//                a[vec[i].first][vec[i].second] = a[vec[j].first][vec[j].second] = a[vec[k].first][vec[k].second] = 1;
//                print();
//                ans = max (ans, solve());
//                a[vec[i].first][vec[i].second] = a[vec[j].first][vec[j].second] = a[vec[k].first][vec[k].second] = 0;
//            }
//    cout << ans << " ";
//}
