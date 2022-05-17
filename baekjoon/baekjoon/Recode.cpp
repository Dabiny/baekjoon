//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int m, n, k, a[101][101], x1, y1, x2, y2, cnt;
//vector<int> v;
//void dfs (int y ,int x)
//{
//    if (a[y][x] == 1)
//        return;
//    a[y][x] = 1;
//    cnt++;
//
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 1)
//            continue;
//        else
//        {
//            dfs(ny, nx);
//        }
//    }
//    return;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> m >> n >> k;
//    
//    for (int i = 0; i < k; i++)
//    {
//        cin >> x1 >> x2 >> y1>> y2;
//
//        for (int x = x1; x < x2; x++)
//        {
//            for (int y = y1; y < y2; y++)
//            {
//                a[y][x] = 1;
//            }
//        }
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (a[i][j] == 0)
//            {
//                dfs(i,j);
//                v.push_back(cnt);
//                cnt = 0;
//            }
//        }
//    }
//    sort(v.begin(), v.end());
//    cout << v.size() << "\n";
//    for (auto i : v)
//        cout << i << "\n";
//}
