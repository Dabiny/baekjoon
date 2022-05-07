//#include <iostream>
//using namespace std;
//int n, m, j, l, r, temp, cnt;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n >> m;
//    cin >> j;
//    l = 1;
//    for (int i = 0; i < j; i++)
//    {
//        r = l + m - 1;
//        cin >> temp;
//        if (temp >= l && temp <= r)
//            continue;
//        else
//        {
//            if (temp < l)
//                cnt += (l - temp);
//            else
//            {
//                l += (temp - r);
//                cnt += (temp - r);
//            }
//        }
//    }
//    cout << cnt << "\n";
//    return 0;
//}
