//#include <iostream>
//#include <queue>
//#include <string.h>
//using namespace std;
//int n, num;
//vector<pair<int, int>> A;
//vector<int> v;
//struct compare
//{
//    bool operator() (pair<int, int>& a, pair<int, int>& b)
//    {
//        if (a.first < b.first)
//        {
//            return b.second < a.second;
//        }
//        else
//        {
//            return  -1;
//        }
//    }
//};
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> num;
//        A.push_back({num, i});
//    }
//    
//    priority_queue<pair<int, int>,vector<pair<int,int>>, compare> pq;
//    
//    for(int i = 0; i < A.size(); i++)
//    {
//        int nge = i;
//        if (nge == A.size() - 1){
//            v.push_back(-1);
//            break;
//        }
//        for (int j = 1; j <= A.size(); j++)
//        {
//            pq.push({A[j]});
//        }
//        v.push_back(pq.top().first);
//        pq.empty();
//    }
//    
//    for (auto i : v)
//        cout << i << " ";
//}
//
