#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> pi;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int n, m, a[11][11];
bool virus[11][11];
vector<pi> v;
void dfs(int x, int y) //바이러스 퍼트리기
{
    if (a[x][y] == 1 || virus [x][y])
        return;
    virus[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if ( ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;
        dfs(nx, ny);
    }
}
int solve()
{
    memset(virus, 0, sizeof(virus));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == 2)
                dfs(i,j); // 벽을세운 기반으로 바이러스 퍼트려보기
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!virus[i][j] && a[i][j] == 0) //바이러스 침투 후 안전지대 확인하기
                ans++;
        }
    }
    return ans; //안전지대 수 반환
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(!a[i][j])//만약 [i][j]가 0이면? 벽을 세울 수 있음.
                v.push_back(pi(i,j)); //벽을 세울수 있는 후보좌표들을 담자.
        }
    }
    int ans = 0;  // cnt존재 안전영역에 카운팅
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 1; //벽3개 세워봄
                ans = max(ans, solve()); //반환된 안전지대수랑 전에있던 안전지대수랑 비교
                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 0; // 다시 벽초기화 시킴
            }
        }
    }
    cout << ans;
}
