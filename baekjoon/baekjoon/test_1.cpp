//#include <iostream>
//#include <queue>
//using namespace std;
//typedef long long int ll;
//queue<int> qu1, qu2;
//int answer = -1 ,cnt;
//ll sum1, sum2;
//
//int solution(vector<int> queue1, vector<int> queue2)
//{
//    for (auto iter : queue1)
//    {
//        qu1.push(iter);
//        sum1 += iter;
//    }
//    
//    for (auto iter : queue2)
//    {
//        qu2.push(iter);
//        sum2 += iter;
//    }
//        
//    
//    for (int i = 0; i < qu1.size() + qu2.size(); i++)
//    {
//        if (qu1.size() && qu2.size() && sum1 > sum2)
//        {
//            int num = qu1.front();
//            qu1.pop();
//            sum1 -= num;
//            
//            qu2.push(num);
//            sum2 += num;
//            cnt++;
//        }
//        else if (qu1.size() && qu2.size() && sum1 < sum2)
//        {
//            int num = qu2.front();
//            qu2.pop();
//            sum2 -= num;
//            
//            qu1.push(num);
//            sum1 += num;
//            cnt++;
//        }
//        
//        if (sum1 == sum2)
//            return cnt;
//    }
//    
//    return answer;
//}
//x
