//#include <iostream>
//#include <string>
//using namespace std;
//int n, team, A, B, asum, bsum, goaltime;
//string tm;
//string print(int& a)
//{
//    string mm = "00" + to_string(a/60);
//    string ss = "00" + to_string(a%60);
//
//    return mm.substr(mm.size()-2, 2) + ":" + ss.substr(ss.size()-2, 2);
//}
//int changeInt(string _time)
//{
//    return atoi(_time.substr(0,2).c_str()) * 60 + atoi(_time.substr(3,2).c_str());
//}
//void func (int& sum, string _time)
//{
//    int m = changeInt(_time);
//    sum = sum + (m - goaltime);
//}
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> team >> tm;
//
//        if (A < B)
//            func(bsum, tm);
//        if (A > B)
//            func(asum, tm);
//
//        team == 1 ? A++ : B++;
//        goaltime = changeInt(tm);
//    }
//
//    if (A > B)
//        func(asum, "48:00");
//    else if (B > A)
//        func(bsum, "48:00");
//
//    cout << print(asum) << "\n";
//    cout << print(bsum) << "\n";
//}
