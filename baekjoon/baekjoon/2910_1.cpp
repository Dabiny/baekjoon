//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n, c, a[1004];
//vector<pair<int,int>> vec;
//map<int,int> mp, mp_first;
//
//bool comp(const pair<int,int>& a, const pair<int,int>& b)
//{
//    if (a.first == b.first)
//        return mp_first[a.second] < mp_first[b.second];
//
//    return a.first > b.first;
//}
//int main()
//{
//    cin >> n >> c;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        mp[a[i]]++;
//        if (mp_first[a[i]] == 0)
//            mp_first[a[i]] = i + 1;
//    }
//
//    for (auto iter : mp)
//        vec.push_back({iter.second, iter.first});
//
//    sort(vec.begin(), vec.end(), comp);
//
//    for (auto iter : vec)
//        for (int i = 0; i < iter.first; i++)
//            cout << iter.second << " ";
//
//    return 0;
//}
