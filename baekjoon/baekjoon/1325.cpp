//#include <iostream>
//#include <string.h>
//#include <vector>
//using namespace std;
//vector<int> v[10001];
//int n, m, a, b, visited[10001], dp[10001], mx;
//int dfs (int here)
//{
//    visited[here] = 1;
//    int size = 1;
//    for (auto there : v[here])
//    {
//        if(visited[there])
//            continue;
//        else
//            size += dfs(there);
//    }
//    return size;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n >> m;
//    while (m--)
//    {
//        cin >> a >> b;
//        v[b].push_back(a); //나와 다른점 애초에 해킹할수있는 벡터에 저장하면됨.
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        memset(visited, 0, sizeof(visited));
//        dp[i] = dfs(i); //초기에 생각했던 어떻게 역으로 돌아가서 해킹할 수있는 컴터를 찾아내지 의 해결방법
//        mx = max(dp[i], mx); //최대값 구하기
//    }
//    for (int i = 1; i <= n; i++)
//        if (mx == dp[i])
//            cout << i << " ";
//
//    return 0;
//}
