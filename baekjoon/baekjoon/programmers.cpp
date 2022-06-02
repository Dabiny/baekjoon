//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//using namespace std;
//unordered_map<string, string> mp;
//unordered_map<string, int> mp2;
//unordered_map<string, int> mail;
//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//    vector<int> answer;
//
//    for (int i = 0; i < id_list.size(); i++)
//        mail[id_list[i]] = 0;
//    for (int i = 0; i < report.size(); i++)
//    {
//        int pos = report[i].find(" ");
//        string str1 = report[i].substr(0, pos);
//        string str2 = report[i].substr(pos + 1);
//
//        if (mp[str1].find(str2) == string::npos)
//            mp[str1] = mp[str1] + str2 + " ";
//    }
//    for (auto i : mp)
//    {
//        for (int j = 0; j < id_list.size(); j++)
//            if (i.second.find(id_list[j]) != string::npos)
//                mp2[id_list[j]]++;
//    }
//    for (auto i : mp)
//          for (int j = 0; j < id_list.size(); j++)
//              if (i.second.find(id_list[j]) != string::npos && mp2[id_list[j]] >= k)
//                  mail[i.first]++;
//
//    for (auto i : mail)
//        cout << i.first << ": " << i.second << "\n";
//
//    return answer;
//}
//
//int main()
//{
//    vector<string> st {"muzi", "frodo", "apeach", "neo"};
//    vector<string> st2 {"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};
//
//    solution(st, st2, 2);
//
//}
