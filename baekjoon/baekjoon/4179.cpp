//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#define rep(i, x, n) for(int i = x; i <= n; i++)
//using namespace std;
//const int INF = 987654321;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int r, c, fire[1004][1004], jihoon[1004][1004], sx, sy, ret;
//char a[1004][1004];
//bool in (int a, int b)
//{
//    return 1 <= a && a <= r && 1 <= b && b <= c;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    queue<pair<int,int>> q;
//    cin >> r >> c;
//    fill(&fire[0][0], &fire[0][0] + 1004 * 1004, INF); //불이 지훈값보다 작을때 대비하는 반례 아예 수를 높게 잡아버리기
//    rep(i,1,r) rep(j,1,c)
//    {
//        cin >> a[i][j];
//        if (a[i][j] == 'F')
//        {
//            fire[i][j] = 1;
//            q.push({i,j});
//        }
//        if (a[i][j] == 'J')
//        {
//            sy = i;
//            sx = j;
//        }
//    }
//    while (q.size())
//    {
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 4; i++)
//        {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if (!in(ny, nx))
//                continue;
//            if (fire[ny][nx] != INF || a[ny][nx] == '#')
//                continue;
//            fire[ny][nx] = fire[y][x] + 1;
//            q.push({ny,nx});
//        }
//    }
//    jihoon[sy][sx] = 1;
//    q.push({sy, sx});
//    while (!q.empty())
//    {
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//        if (x == c || y == r || x == 1 || y == 1)
//        {
//            ret = jihoon[y][x];
//            break;
//        }
//        rep(i,0,4)
//        {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if (!in(ny, nx))
//                continue;
//            if (jihoon[ny][nx] || a[ny][nx] == '#')
//                continue;
//            if (fire[ny][nx] <= jihoon[y][x] + 1)
//                continue;
//            jihoon[ny][nx] = jihoon[y][x] + 1;
//            q.push({ny, nx});
//        }
//    }
//    if (ret != 0)
//        cout << ret << "\n";
//    else
//        cout << "IMPOSSIBLE \n";
//    return 0;
//}
