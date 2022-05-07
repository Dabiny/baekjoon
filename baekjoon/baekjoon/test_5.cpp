//#include <vector>
//#include <iostream>
//#include <tuple>
//using namespace std;
//int decy[4] = {-1, -1, 1, 1};
//int decx[4] = {0, -1, 1, -1};
//
//int croy[4] = {-1, 0, 1, 0};
//int crox[4] = {0, 1, 0, -1};
//vector<vector<int>> vec;
//int y, x, rot;
//
//void oper (vector<vector<int>>& _v)
//{
//    for (int i = 0; i < _v.size(); i++)
//    {
//        int num = i + 1;
//        vector<int> temp = _v[i];
//        vec[i] = temp;
//    }
//}
//
//void rotate (vector<vector<int>>& _v)
//{
//    y = (int)_v.size() / 2;
//    x = (int)_v.size() / 2;
//    vec[y][x] = _v[y][x];
//    vector <pair<int, int>> hol; //홀수좌표
//    vector <pair<int, int>> zzac; //짝수좌표
//
//    for (int i = 0; i < _v.size(); i++)
//    {
//        for (int j = 0; j < _v[i].size(); j++)
//        {
//            if (!_v[y][x] && _v[i][j] % 2 == 1)
//            {
//                hol.push_back({i, j});
//            }
//            if (!_v[y][x] && _v[i][j] % 2 == 0)
//            {
//                zzac.push_back({i, j});
//            }
//        }
//    }
//
//    if (rot % 2 == 1) //홀수번 (한번) 돌렸을때
//    {
//        for (int i = 0; i < _v.size(); i++)
//        {
//            for (int j = 0; j < _v[i].size(); j++)
//            {
//                if (_v[i][j] % 2 == 1 && !_v[y][x])
//                {
//                    vec[zzac[j].first][zzac[j].second] = _v[i][j];
//                }
//                if (_v[i][j] % 2 == 0 && !_v[y][x])
//                {
//                    vec[hol[j].first][hol[j].second] = _v[i][j];
//                }
//            }
//        }
//    }
//    if (rot % 2 == 0) //짝수번 돌렸을 때
//    {
//        for (int i = 0; i < _v.size(); i++)
//        {
//            for (int j = 0; j < _v[i].size(); j++)
//            {
//                vec[j][_v[i].size() - i - 1] = _v[i][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < _v.size(); i++)
//    {
//        for (int j = 0; j < _v[i].size(); j++)
//        {
//            _v[i][j] = vec[i][j];
//        }
//    }
//
//}
//vector<vector<int>> solution(vector<vector<int>> rc, vector<string> operations)
//{
//    for (int i = 0; i <operations.size(); i++)
//    {
//        if (operations[i] == "Rotate")
//        {
//            rot++;
//            rotate(rc);
//        }
//        if (operations[i] == "ShiftRow")
//        {
//            oper(rc);
//        }
//    }
//
//    return rc;
//}
