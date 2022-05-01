//#include <iostream>
//#include <stack>
//using namespace std;
//int n, cnt;
//string s;
//int main()
//{
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s; //ABBA
//        stack<char> stk;
//
//        for (char iter : s) //iter는 들어오려고 하는애
//        {
//            if (stk.size() && stk.top() == iter) //꼭 사이즈 확인예문을 넣어야함. 체크하고 들어가야함
//                stk.pop();
//            else
//                stk.push(iter);
//        }
//        if (stk.size() == 0)
//            cnt++;
//    }
//
//    cout << cnt << "\n";
//}
