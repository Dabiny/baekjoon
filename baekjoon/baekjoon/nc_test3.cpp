//#include <vector>
//#include <string>
//#include <queue>
//#include <tuple>
//using namespace std;
//typedef pair<int,int> pi;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int a[101][101], n,m, cnt;
//int visited[101][101];
//vector <pi> v;
//void dfs(int y, int x)
//{
//    if(visited[y][x] == true)
//        return;
//
//    visited[y][x] = 1;
//
//    for (int i = 0; i < 4 ; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m)
//            continue;
//        
//        if (a[ny][nx] == 3) // 검은자동차면
//            continue;
//
//        if (a[ny][nx] == 3;
//    }
//}
//int solution(vector<vector<int>> cars)
//{
//    m = n = cars.size();
//    for(int i = 0; i < cars.size();i++)
//        for (int j= 0; j < cars[i].size(); j++)
//        {
//            a[i][j] = cars[i][j];
//            if (a[i][j] == 1)
//                v.push_back(pi(i,j));
//        }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (!visited[i][j] && a[i][j] == 2)
//            {
//                dfs(i,j);
//            }
//        }
//    }
//
//
//}
