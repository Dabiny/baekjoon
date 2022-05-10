//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//#define sz(x) ((int)(x).size())
//#define f first
//#define s second
//typedef unsigned long long ll;
//string s;
//int cnt[30], lcnt, vcnt; //lcnt -> 모음, vcnt -> 자음
//
//bool isVowel(int idx)
//{
//    return (idx == 0 || idx == 4 || idx == 8 || idx == 14 || idx == 20);
//}// 모음인지 아닌지 알아내는 불형 함수
//int main()
//{
//    while(true)
//    {
//        cin >> s;
//        
//        if (s == "end")
//            break;
//        memset(cnt, 0, sizeof(cnt)); //멤셋 공부하기
//        lcnt = vcnt = 0; //초기화 0으로
//        bool flag = 0; //플래그 선언 (깃발의미)
//        
//        for (int i = 0; i < s.size(); i++)
//        {
//            int idx = s[i] - 'a'; // 숫자로 변환하기
//            cnt[idx]++; //[숫자로변환한 알파벳자리에]++;
//            
//            if(isVowel(idx)) //모음함수에서 트루가 맞다면
//                lcnt++, vcnt = 0;
//            else
//                vcnt++, lcnt = 0;
//            
//            if(vcnt == 3 || lcnt == 3) //자음, 모음 3개이상 예외처리 1
//                flag = 1;
//            
//            if (i >= 1 && (s[i - 1] == s[i]) && (idx != 4 && idx != 14))
//                //같은글자가 연속적으로 두번나오면 안되는데 그게 근데 ee oo 이면 가능 예외처리 2
//                flag = 1;
//        }
//        
//        if (!cnt[0] && !cnt[4] && !cnt[8] && !cnt[14] && !cnt[20])
//            // 모음 aeiou 하나는 반드시 포함해야됨.
//            flag = 1;
//        
//        if (flag)
//            cout << "<" << s << ">" << " is not acceptable.\n";
//        else
//            cout << "<" << s << ">" << " is acceptable.\n";
//    }
//    
//    return 0;
//}
