//#include <iostream>
//#include <stack>
//using namespace std;
//int n, a[100'000'4], ret[100'000'4];
//stack<int> s;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n;
//    memset(ret, -1, sizeof(ret));
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        while(s.size() && a[s.top()] < a[i])
//        {
//            ret[s.top()] = a[i];
//            s.pop();
//        }
//        s.push(i);
//    }
//    for(int i = 0; i < n; i++)
//    {
//        cout << ret[i] << " ";
//    }
//}
