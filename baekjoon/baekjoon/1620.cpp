
//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int n, m;
//string name; //포켓몬 이름 2 ~ 20
//map<int, string> mp; //도감 리스트
//map<string, int> mp2;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> name;
//        mp2[name] = i + 1; // purin 1
//        mp[i + 1] = name; // 1 purin
//    }
//
//    for (int i = 0; i < m ; i++)
//    {
//        cin >> name;
//
//        if (atoi(name.c_str()) == 0)
//        {
//            cout << mp2[name] << "\n";
//        }
//        else
//            cout << mp[atoi(name.c_str())] << "\n";
//    }
//}
