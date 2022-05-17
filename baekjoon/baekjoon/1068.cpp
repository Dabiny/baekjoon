//#include <iostream>
//#include <vector>
//using namespace std;
//int n, val, num, cnt, root;
//vector<int>vec[54];
//int visited[51];
//int dfs (int here)
//{
//    int ret = 0;
//    int child = 0;
//
//    for (int there : vec[here])
//    {
//        if (there == num) //지울 노드번호가 같다면 그노드는 탐색하지 말기
//            continue;
//
//        ret += dfs(there);
//        child++;
//    }
//    if (child == 0)
//        return 1;
//
//    return ret;
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> val;
//        if(val == -1)
//            root = i;
//        else
//            vec[val].push_back(i);
//    }
//    cin >> num; //지울 노드번호
//
//    if (num == root) //지울 노드번호가 루트번호라면 종료
//    {
//        cout << 0 << "\n";
//        return 0;
//    }
//
//    cout << dfs(root) << "\n"; // 루트부터 탐색
//    return 0;
//}
