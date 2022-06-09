//#include <iostream>
//#include <vector>
//using namespace std;
//int n, a[4], cnt;
//int sum[3] = {9, 3, 1};
//vector<vector<int>> vec;
//void combi(int start, vector<int> v)
//{
//    if(v.size() == n)
//    {
//        vec.push_back(v);
//        return;
//    }
//    for (int i = start + 1; i < n; i++)
//    {
//        v.push_back(sum[i]);
//        combi(i, v);
//        v.pop_back();
//    }
//    return;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    vector<int> v;
//    combi(-1, v);
//    vector<int> total;
//
//    for (int i = 0; i < vec.size(); i++)
//        for (int j = 0; j < vec[i].size(); j++)
//        {
//            total[j] = a[j] - vec[i][j];
//            cnt++;
//            if (!total.size())
//                break;
//        }
//
//    int _min = 987654321;
//    cnt = min(_min, cnt);
//}
//
