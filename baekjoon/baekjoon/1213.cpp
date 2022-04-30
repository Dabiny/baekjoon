//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//string s, ret;
//int cnt[200], flag;
//char mid;
//
//int main()
//{
//    cin >> s; // AAABB
//    for (char a : s)
//        cnt[a]++;
//    
//    for (int i = 'Z'; i >= 'A'; i--) //꺼꾸로 해주는이유는 A가 앞에 나올수 있기 때문에 ..?
//    {
//        if (cnt[i]) //B 2개
//        {
//            if (cnt[i] & 1) //홀수이면(비트연산자)
//            {
//                mid = char(i);
//                flag++;
//                cnt[i]--;
//            }
//            if (flag == 2)
//                break;
//            
//            for (int j = 0; j < cnt[i]; j += 2)
//            {
//                ret = char(i) + ret;
//                ret += char(i);
//            } //이게 왜 양옆으로 나옴?
//        }
//    }
//    
//    if (mid)
//        ret.insert(ret.begin() + ret.size() / 2, mid);
//    if (flag == 2)
//        cout << "I'm Sorry Hansoo\n";
//    else
//        cout << ret << "\n";
//}
