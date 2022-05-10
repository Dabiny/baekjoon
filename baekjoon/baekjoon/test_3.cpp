//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//int cnt, y = -1, x; //소요시간
//map<int,int> apmp,comp;
//
//void study (int _y, vector<vector<int>>& _problems)
//{
//    vector<pair<int,int>> vec;
//
//    for (int i = 0; i < _problems.size(); i++)
//    {
//        for (int  j = 1; j < 2; j++)
//        {
//            vec.push_back({i, j});
//        }
//    }
//
//    for (auto it : vec)
//    {
//        if (it.first)
//    }
//}
//
//int solution(int alp, int cop, vector<vector<int>> problems)
//{
//    for (int i = 0; i < problems.size(); i++)
//    {
//        for (int j = 0; j < 1; j++)
//        {
//            apmp[i] = problems[i][j];
//            comp[i] = problems[i][j+1];
//        }
//    }
//
//    for (auto iter : apmp)
//    {
//        if (iter.second == alp)
//        {
//            if (comp[iter.first] == cop)
//            {
//                y = iter.first; // 시작 좌표 저장
//                study(y, problems);
//            }
//        }
//        else if (iter.second <= alp || comp[iter.first] <= cop)
//        {
//            if (comp[iter.first] > cop)
//            {
//                cnt = (comp[iter.first] - cop) + cnt;
//            }
//            if (iter.second > alp)
//            {
//                cnt = (apmp[iter.first] - alp) + cnt;
//            }
//        }
//    }
//
//
//    return cnt;
//}
//
