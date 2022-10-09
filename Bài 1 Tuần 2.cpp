/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void enter_adjacency_matrix(int N, int M, int adj[][100]);

int main()
{
    int N, M;
    int adj[100][100];
    cout <<"Nhap so dinh va canh";
    cin >> N>>M;
    enter_adjacency_matrix(N,M, adj);
    return 0;
}
void enter_adjacency_matrix(int N, int M, int adj[][100])
{
    adj[N][N] = 0;
    int a,b;
    for (int i=0; i<M;i++)
    {
        cout<<"Nhap 2 dinh tao nen canh thu "<<i+1<<":\n";
        cout<<"Dinh thu 1:";
        cin>>a;
        cout<<"Dinh thu 2:";
        cin>>b;
        adj[a][b]=1;
    }
}

