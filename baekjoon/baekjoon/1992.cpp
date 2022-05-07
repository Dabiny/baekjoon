//#include <iostream>
//#include <string>
//using namespace std;
//typedef long long int ll;
//int n;
//string s;
//char a[101][101];
//
//string go (int y, int x, int size)
//{
//    if (size == 1)
//        return string(1, a[y][x]);
//    char ch = a[y][x];
//    string str = "";
//
//    for (int i = y; i < y + size; i++)
//    {
//        for (int j = x; j < x + size; j++)
//        {
//            if (ch != a[i][j])
//            {
//                str += '(';
//                str += go (y, x, size / 2);
//                str += go (y, x + size / 2, size / 2);
//                str += go (y + size / 2, x, size / 2);
//                str += go (y + size / 2, x + size / 2, size / 2);
//                str += ')';
//                return str;
//            }
//        }
//    }
//    return string(1, a[y][x]);
//}
//int main()
//{
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s;
//        for (int j = 0; j < n; j++)
//        {
//            a[i][j] = s[j];
//        }
//    }
//
//    cout << go(0, 0, n) << '\n';
//}
