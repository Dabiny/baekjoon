//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution (vector<string> birth)
//{
//    int cnt = 0;
//    string str = "";
//    for (int i = 0; i < birth.size(); i++)
//    {
//        str = birth[i];
//        for (int i = 0; i < str.size(); i++)
//        {
//            if (str[4] == '-' && str[7] == '-')
//            {
//                int year = atoi(str.substr(0,4).c_str());
//                int month = atoi(str.substr(5,2).c_str());
//                int day = atoi(str.substr(8,2).c_str());
//
//                if (year == 0 && month == 0 && day == 0)
//                    break;
//                if (year % 400 == 0 && year % 100 != 0 && month == 2 && day > 29) //윤년2월 29일보다 높으면
//                    break;
//                if (year > 2021 && year < 1900)
//                    break;
//                if (month > 12 && month < 1)
//                    break;
//                if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//                {
//                    if (day > 31)
//                        break;
//                }
//                if (month == 4 || month == 6 || month == 9 || month == 11)
//                {
//                    if (day > 30)
//                        break;
//                }
//                else
//                {
//                    cnt++;
//                    break;
//                }
//
//            }
//        }
//    }
//
//    return cnt;
//}


