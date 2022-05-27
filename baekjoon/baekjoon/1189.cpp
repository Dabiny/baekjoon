//#include <iostream>
//#include <string>
//using namespace std;
//int r, c, k, visited[6][6], cnt;
//char a[6][6];
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int go (int y, int x)
//{
//    if (y == 0 && x == c - 1)
//    {
//        if (k == visited[y][x])
//            return 1;
//        return 0;
//    }
//    int n = 0; // 이걸 세우는 기준을 모르겠음
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//
//        if (ny < 0 || ny >= r || nx < 0 || nx >= c || visited[ny][nx] || a[ny][nx] == 'T')
//            continue;
//        visited[ny][nx] = visited[y][x] + 1;
//        for(int i = 0; i < 6; i++)
//        {
//            for (int j = 0; j < 6; j++)
//            {
//                cout << visited[i][j] << " ";
//            }
//            cout << "\n";
//        }
//        cout <<"\n";
//        n += go(ny, nx);
//        visited[ny][nx] = 0; //다시 세팅해주기?
//    }
//    return n;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> r >> c >> k;
//
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//
//    visited[r-1][0] = 1;
//    cnt = go(r-1, 0);
//    cout << cnt;
//}
