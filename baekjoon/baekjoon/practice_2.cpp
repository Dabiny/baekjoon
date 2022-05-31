#include <iostream>
using namespace std;
int a[100'004], b, c, psum[100'004], n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 0; i < m; i++)
    {
        cin >> b >> c;
        int sum = 0;
        for (int j = b; j <= c; j++)
            sum += a[j];
        
        cout << sum << "\n";
    }
    return 0;
}
