#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
using namespace std;
typedef pair<int, int> P;
stack<P> s1, s2;
int rec[400][400];
int m, n;
int mx[8] = {-1, -2, -2, -1, 1, 2, 2, 1}, my[8] = {-2, -1, 1, 2, -2, -1, 1, 2};

// void jump(int si, int sj)
// {
//     int times = 0, i, j;

//     P q = P(si, sj);
//     Q1.push(q);

//     do
//     {
//         i = Q1.front().first;
//         j = Q1.front().second;
//         if (i < 0 || i >= m || j < 0 || j >= n)
//         {
//             Q1.pop();
//             continue;
//         }
//         else if (rec[i][j] != -1)
//         {
//             Q1.pop();
//             continue;
//         }
//         else
//         {
//             for (int k = 0; k < 8; k++)
//             {
//                 q = P(i + my[k], j + mx[k]);
//                 Q1.push(q);
//                 rec[i + my[k]][j + mx[k]] = times;
//             }
//         }
//     } while (!Q.empty() && !)
// }

int main()
{
    // int x, y;
    // scanf("%d %d %d %d", &n, &m, &x, &y);

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         rec[i][j] = -1;
    //     }
    // }

    // jump(y - 1, x - 1);

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << rec[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int i, j 

    do{
        while(!s1.empty()){

        }
        while(!s2.empty()){

        }
    }while(!s1.empty() && !s2.empty());
}