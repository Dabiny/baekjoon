#include <iostream>
#include <vector>
using namespace std;
int n, m, a, b;
vector<int> v[100'004];
vector<int> h[100'004];
vector<int> ans;
bool check[100'004];

int main()
{
    cin >> n >> m; // 컴터수, 신뢰정보수
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b; //a가 b를 신뢰
        v[a].push_back(b);
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < v[i].size(); i++)
        {
            check[i] = 1; //flag
            h[i][j] = i; // 1번컴터가 3번컴터 해킹가능하게 적어놓기
        }
    }
    
    sort(ans.begin(), ans.end());
    
    for(auto i : ans)
        cout << i << " ";
}
