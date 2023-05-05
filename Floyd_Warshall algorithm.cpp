// FLoyd warshall
#include <iostream>
using namespace std;
#define V 3
#define INT_MAX 1000

void Floyd_Warshall(int cost[V][V], int A[V][V], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = cost[i][j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
    cout << " Shortest Distances between Vertices :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int cost[V][V] = {{0, 4, 11}, {6, 0, 2}, {3, INT_MAX, 0}};
    int A[V][V];
    int n = V;

    Floyd_Warshall(cost, A, n);
    return 0;
}