#include <iostream>
#include <vector>
using namespace std;
int n, val, num, cnt, root;
vector<int> vec[54];
int visited[51];
int dfs(int here)
{
    int ret = 0;
    int child = 0;
    cout << here <<"을 가지고 dfs들어옴" << "\n";
    for (int there : vec[here])
    {
        if (there == num)
            continue;
        
        cout << "there : " << there << " ret: " << ret << "\n";
        ret += dfs(there);
        child++;
        cout << "there: "<< there << "child: " << child << "\n";
    }
    if (child == 0)
    {
        cout << "not child" << "\n";
        return 1;
    }
       
    return ret;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val == -1)
            root = i;
        else
            vec[val].push_back(i);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int there : vec[i])
            cout << i << " : " << there << " ";
        cout << "\n";
    }
        
        
    cin >> num;
    if (num == root)
    {
        cout << 0 << "\n";
    }
    cout << dfs(root) << "\n";
    return 0;
}

