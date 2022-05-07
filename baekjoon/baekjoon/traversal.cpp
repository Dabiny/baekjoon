//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> adj[1004];
//int visited[1004];
//
//void postOrder(int here)
//{
//    if (visited[here] == 0)
//    {
//        if (adj[here].size() == 1)
//            postOrder(adj[here][0]);
//
//        if (adj[here].size() == 2)
//        {
//            postOrder(adj[here][0]);
//            postOrder(adj[here][1]);
//        }
//
//        visited[here] = 1;
//        cout << here << ' ';
//    }
//}
//
//void preOrder(int here)
//{
//    if (visited[here] == 0)
//    {
//        visited[here] = 1;
//        cout << here << ' ';
//
//        if (adj[here].size() == 1)
//            preOrder(adj[here][0]);
//
//        if (adj[here].size() == 2)
//        {
//            preOrder(adj[here][0]);
//            preOrder(adj[here][1]);
//        }
//    }
//}
//
//void inOrder(int here)
//{
//    if (visited[here] == 0)
//    {
//        if (adj[here].size() == 1)
//        {
//            inOrder(adj[here][0]);
//            visited[here] = 1;
//            cout << here << ' ';
//        }
//        if (adj[here].size() == 2)
//        {
//            inOrder(adj[here][0]);
//            visited[here] = 1;
//            cout << here << ' ';
//
//            inOrder(adj[here][1]);
//        }
//
//        visited[here] = 1;
//        cout << here << ' ';
//    }
//
//}
//
//int main()
//{
//    adj[1].push_back(2);
//    adj[1].push_back(3);
//    adj[2].push_back(4);
//    adj[2].push_back(5);
//
//    int root = 1;
//    cout << "\n 트리순회 : postoreder \n";
//    postOrder(root);
//    memset(visited, 0, sizeof(visited)); //함수 초기화
//
//    cout << "\n 트리순회 : preorder \n";
//    preOrder(root);
//    memset(visited, 0, sizeof(visited)); //함수 초기화
//
//    cout << "\n 트리순회 : inorder \n";
//    inOrder(root);
//
//    return 0;
//}
//
///*
// 트리순회 : postoreder
//4 5 2 3 1
// 트리순회 : preorder
//1 2 4 5 3
// 트리순회 : inorder
//4 2 5 2 1 3 1
// */
