#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[1004];
int visited[1004];

void postOrder(int here)
{
    if (visited[here] == 0)
    {
        if (adj[here].size() == 1)
            postOrder(adj[here][0]);
        if (adj[here].size() == 2)
        {
            postOrder(adj[here][0]);
            postOrder(adj[here][1]);
        }
        visited[here] = 1;
        cout << here << ' ';
    }
}

void preOrder(int here)
{
    
}

void inOrder(int here)
{
    
}

int main()
{
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    
    int root = 1;
    cout << "\n 트리순회 : postoreder \n";
    postOrder(root);
    memset(visited, 0, sizeof(visited)); //함수 초기화
    
    cout << "\n 트리순회 : preorder \n";
    preOrder(root);
    memset(visited, 0, sizeof(visited)); //함수 초기화
    
    cout << "\n 트리순회 : inorder \n";
    inOrder(root);
    
    return 0;
}
