//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int max_n = 104;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, m, sx, sy, ey, ex, a[max_n][max_n], visited[max_n][max_n], y, x;
//
//int main()
//{
//    cin >> n >> m;
//    cin >> sy >> sx;
//    cin >> ey >> ex;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> a[i][j];
//        }
//    } // 맵정보 받아오는 중
//
//    queue<pair<int,int>> q;
//    visited[sy][sx] = 1;
//    q.push({sy, sx}); // 페어일때 푸시는 이렇게 해준다.
//
//    while (q.size())
//    {
//        tie(y, x) = q.front();
//        //pair,tuple로 묶인녀석들을 던저서 여러 변수에 한벉에 받아올 수있음
//        q.pop();
//
//        for (int i = 0; i < 4; i++)
//        {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//
//            if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0)
//                continue;
//
//            if (visited[ny][nx])
//                continue;
//
//            visited[ny][nx] = visited[y][x] + 1;
//            q.push({ny, nx});
//        }
//    }
//
//    printf("%d\n", visited[ey - 1][ex - 1]);
//
//    // 최단거리 디버깅
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < m; j++){
//            cout << visited[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//    /*
//     1 0 5 0 9
//     2 3 4 0 8
//     0 0 5 6 7
//     0 0 6 7 8
//     0 0 7 8 9
//     */
//    return 0;
//}


