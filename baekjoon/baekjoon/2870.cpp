//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n;
//vector<string> v;
//string s, str;
//void go()
//{
//    if(str.size())
//    {
//        while(true)
//        {
//            if(str.size() && str.front() == '0')
//                str.erase(str.begin());
//            else
//                break;
//        }
//        if (str.size() == 0) //"00"이 들어갈때
//            str = "0";
//
//        v.push_back(str);
//        str = "";
//    }
//}
//bool cmp(string a, string b)
//{
//    if(a.size() == b.size())
//        return a < b;
//    return a.size() < b.size();
//}
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s;
//        str = "";
//        for (int j = 0; j < s.size(); j++)
//        {
//            if(s[j] < 58)
//                str += s[j];
//            else //그게아니고 숫자가아닌 문자가오면
//                go();
//        }
//        go();
//        // ex) 04udodd044 이면 마지막 044는 str에 넣어둔채 포문이 끝난다
//        // 그래서 포문이끝나면 바로 044를 처리하기위해 함수를 실행시켜줘야함.
//    }
//    sort (v.begin(), v.end(), cmp);
//
//    for (string i : v)
//        cout << i << "\n";
//
//    return 0;
//}
