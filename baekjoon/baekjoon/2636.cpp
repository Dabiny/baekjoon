//#include <iostream>
//#include <string.h>
//#include <vector>
//using namespace std;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//int n, m, a[101][101], visited[101][101],cnt,cnt2, cheese1, cheese2;
//vector<pair<int, int>> v;
//void go (int y, int x)
//{
//    if (a[y][x] == 1)
//    {
//        v.push_back({y,x});
//        return;
//    }
//    
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])
//            continue;
//        
//        visited[ny][nx] = 1;
//        go(ny,nx);
//    }
//    return;
//}
//int main()
//{
//    cnt = 0;
//    cnt2 = 0;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    while(true)
//    {
//        cnt2 = 0;
//        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
//        v.clear();
//        
//        go(0,0); //치즈 겉면 정보를 얻어오기
//        
//        for (auto i : v)
//        {
//            if(a[i.first][i.second] == 1)
//                cnt2++;
//        }
//        for (auto i : v)
//            a[i.first][i.second] = 0; //다시 0으로 만들어 놓기 녹았으니까
//        
//        cnt++;
//        bool flag = 0;
//        for (int i = 0; i < n; i++)
//        {
//            for(int j = 0; j < m; j++)
//            {
//                if (a[i][j] != 0) //치즈가 계속 있다면
//                    flag = 1;
//            }
//        }
//        if (!flag) //치즈가 다녹아서 없으면 break;
//            break;
//    }
//    cout << cnt <<  "\n";
//    cout << cnt2 << "\n";
//}
