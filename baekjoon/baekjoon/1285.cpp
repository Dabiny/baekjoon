//#include <iostream>
//#include <vector>
//using namespace std;
//int n, inf = 987654321;
//char a[24][24];
//vector<pair<int, int>> vc;
//vector<vector<pair<int,int>>> vc2;
//void combi(int start, vector<pair<int,int>> v)
//{
//    if (v.size() == n)
//    {
//        vc2.push_back(v);
//        return;
//    }
//    for (int i = start + 1; i < n; i++)
//    {
//        for (int j = start + 1; i < n; i++)
//        {
//            v.push_back({i,j});
//            combi(start + 1, v);
//            v.pop_back();
//        }
//    }
//    return;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//        {
//            cin >> a[i][j];
//            vc.push_back({i,j}); //y.x값 받아오기
//        }
//    vector<pair<int,int>> v;
//    combi(-1, v);
//
//}
