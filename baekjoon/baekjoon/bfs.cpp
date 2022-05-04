//#include <iostream>
//#include <queue>
//using namespace std;
//const int MAX_N = 104;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n , m, sy, sx, ey, ex, y, x, a[MAX_N][MAX_N], visited[MAX_N][MAX_N];
//int main()
//{
//    cin >> n >> m;
//    cin >> sy >> sx; //시작지점
//    cin >> ey >> ex; //도착지점
//    for (int i  = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> a[i][j]; //맵그리기
//
//    queue<pair<int,int>> q;
//    visited[sy][sx] = 1;
//    q.push({sy, sx});
//
//    while(q.size())
//    {
//        tie(y, x) = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; i++)
//        {
//
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//
//            if ( ny < 0 || ny >= 100 || nx < 0 || nx >= 100 || a[ny][nx] != 0 || visited[ny][nx] != 0)
//            {
//                visited[ny][nx] = visited[y][x] + 1;
//                q.push({ny, nx});
//            }
//        }
//    }
//    
//    for(int i = 0; i < n; i++){
//            for(int j = 0; j < m; j++){
//                cout << visited[i][j] << ' ';
//            }
//            cout << '\n';
//        }
//
//}
