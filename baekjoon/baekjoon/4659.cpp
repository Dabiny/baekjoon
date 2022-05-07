//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//string mo = "aeiou";
//string ja = "bcdfghjklmnpqrstvwxyz";
//string s;
//
//int main()
//{
//    while (true)
//    {
//        cin >> s;
//        stack<char> stk;
//        int jacnt = 0;
//        int mocnt = 0;
//
//        for (auto iter : s)
//        {
//            if (!stk.size() && ja.find(iter))
//            {
//                jacnt++;
//                stk.push(iter);
//            }
//            else if (!stk.size() && mo.find(iter))
//            {
//                mocnt++;
//                stk.push(iter);
//            }
//            else if (stk.size() && ja.find(stk.top()) && ja.find(iter) && jacnt <= 3)
//            {
//                jacnt++;
//                stk.pop();
//            }
//        }
//
//        if (s == "end")
//            break;
//    }
//    return 0;
//}
