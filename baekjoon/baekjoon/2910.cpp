//#include <iostream>
//#include <map>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, c, val, a[1001], cnt;
//vector<pair<int,int>> vec;
//map<int, int> mp, mp_first;
//bool comp (pair<int, int> a, pair<int, int> b)
//{
//    if (a.first == b.first)
//        return mp_first[a.second] < mp_first[b.second];
//    
//    return a.first > b.first;
//}
//
//int main()
//{
//    cin >> n >> c;
//    
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        mp[a[i]]++;
//        if (mp_first[a[i]] == 0)
//            mp_first[a[i]] = i + 1; //??
//    }
//    for (auto it : mp)
//    {
//        vec.push_back({it.second, it.first});
//    }
//    
//    sort (vec.begin(), vec.end(), comp);
//    
//   for (auto i : vec)
//       for(int j = 0; j < i.first; j++)
//       {
//           cout << i.second << " ";
//       }
//    
//    return 0;
//}
