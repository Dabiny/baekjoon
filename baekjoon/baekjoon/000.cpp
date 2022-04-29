#include <iostream>
#include <algorithm>
using namespace std;
int n, k, temp, psum[100'001], ret = -10'000'004; //최악의 최솟값 ret
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        psum[i] = psum[i-1] + temp;
    }
    
    for (int i = 0; i < k; i++)
    {
        ret = max(ret, psum[i] - psum[i - k]);
    }
    
}
