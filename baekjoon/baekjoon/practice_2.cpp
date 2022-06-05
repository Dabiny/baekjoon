//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//const int INF = 987654321;
//int a[104][104], ret = INF, n = 10;
//map<int, int> mp;
//void draw (int y, int x, int cnt, int value)
//{
//    for (int i = y; i < y + cnt; i++)
//        for (int j = x; j < x + cnt; j++)
//            a[i][j] = value;
//}
//bool check (int y, int x, int cnt)
//{
//    if (y + cnt > n || x + cnt > n)
//        return false;
//    for (int i = y; i < y + cnt; i++)
//        for (int j = x; j < x + cnt; j++)
//            if (a[i][j] == 0)
//                return false;
//    return true;
//}
//void dfs (int y, int x, int cnt)
//{
//    if (cnt >= ret) //ret은 마지막을 출력할 무언가
//        return;
//    if (x == n)
//        dfs(y + 1, 0, cnt);
//    if (y == n) //y == n이다? 필드가 끝난거임
//    {
//        ret = min(cnt, ret);
//        return;
//    }
//    if (a[y][x] == 0)
//    {
//        dfs (y, x + 1, cnt);
//        return;
//    }
//    for (int _size = 5; _size >= 1; _size--) //색종이는 큰것부터 붙이기
//    {
//        if (mp[_size] == 5) //5개 다쓰면 컨티뉴
//            continue;
//        if (check(y, x, _size)) //이 색종이를 과연 붙일수 있냐없냐? 있으면
//        {
//            mp[_size]++; //색종이 ++
//            draw(y, x, _size, 0); //색칠하기
//            dfs (y, x + _size, cnt + 1); //cnt + 1해주면서 다시 dfs돌기
//            draw (y, x, _size, 1); //다시 떼기
//            mp[_size]--;
//        }
//    }
//}
//int main()
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> a[i][j];
//    dfs(0,0,0);
//    cout << (ret == INF ? -1 : ret) << "\n";
//    return 0;
//}
