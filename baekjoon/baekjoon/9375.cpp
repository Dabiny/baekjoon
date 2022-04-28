//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int n, t;
//string cloth, carte;
//
//int main()
//{
//    cin >> t; //2
//    while(t--)
//    {
//        map<string, int> mp;
//        cin >> n;
//
//        for (int i = 0; i < n; i++)
//        {
//            cin >> cloth >> carte;
//            mp[carte]++;
//        }
//
//        long long ret = 1;
//
//        for (auto c : mp)
//            ret *= ((long long) c.second + 1); // 카테고리 수 + 그 카테고리만 입는 경우의수 1
//
//        ret--; //알몸인 상태 빼기
//        cout << ret << "\n";
//    }
//
//    return 0;
//}
