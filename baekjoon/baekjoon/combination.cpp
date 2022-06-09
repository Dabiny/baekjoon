#include <iostream>
#include <vector>
using namespace std;
vector<int> c;
int n = 5;
int k = 3;
int a[5] = {1, 2, 3, 4, 5};
void print (vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;
}
void combi (int start, vector<int> b)
{
    if(b.size() == k)
    {
        print(b);
        return;
    }
    for (int i = start + 1; i < n; i++)
    {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}
int main()
{
    combi(-1, c);
    return 0;
}
/*
 0 1 2
 0 1 3
 0 1 4
 0 2 3
 0 2 4
 0 3 4
 1 2 3
 1 2 4
 1 3 4
 2 3 4
 */

