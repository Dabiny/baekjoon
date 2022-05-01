//#include <iostream>
//using namespace std;
//typedef long long ll;
//ll A, B, C;
//
//ll go(ll a, ll b) //11, 10
//{
//    if (b == 1)
//        return a % C;
//    
//    ll _c = go (a, b / 2); // (11, 5) , (11, 2), (11, 1)
//    
//    _c = (_c * _c) % C; //반으로 쪼개서 곱한다..메모이제이션
//    
//    if (b % 2) //이게만약 홀수다.
//        _c = (_c * a) % C;
//    
//    return _c;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> A >> B >> C;
//    cout << go(A, B) << "\n";
//    
//}
