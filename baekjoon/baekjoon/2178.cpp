//#include <iostream>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//const int MAX_N = 104;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, m, y, x, a[MAX_N][MAX_N], visited[MAX_N][MAX_N];
//
//int main()
//{
//    scanf ("%d %d", &n, &m);
//    
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            scanf("%1d", &a[i][j]); //따닥따닥 입력
//     
//    queue<pair<int,int>> q;
//    visited[0][0] = 1;
//    q.push({0,0});
//    
//    while (q.size())
//    {
//        tie(y, x) = q.front();
//        q.pop();
//        
//        for (int i = 0; i < 4; i++)
//        {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            
//            if (ny < 0 || ny >= n || nx < 0 || nx >= m
//                || visited[ny][nx] != 0 || a[ny][nx] == 0)
//                continue;
//            
//            else
//            {
//                visited[ny][nx] = visited[y][x] + 1;
//                q.push({ny, nx});
//            }
//        }
//    }
//    cout << visited[n - 1][m -1] << "\n";
//    return 0;
//}
