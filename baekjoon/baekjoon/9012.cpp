#include <iostream>
#include <stack>
using namespace std;
int n;
string str;
stack<char>stk;
bool check(string s)
{
    stack<char> stk;
    for(char c : s)
    {
        if (c == '(')
            stk.push(c);
        else
        {
            if(!stk.empty())
                stk.pop();
            else
                return false; //')'가 들어오는경우 암것도없는데
        }
    }
    return stk.empty(); //stk.empty면 트루
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(check(str))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
