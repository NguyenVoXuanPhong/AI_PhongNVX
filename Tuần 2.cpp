/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void enter_adjacency_matrix(int N, int M, int adj[][100]);
void enter_edge_list(int N, int M, vector<pair<int, int>> &edge_list);
void show_edge_list(int N, int M, vector <pair<int, int>> edge_list);
void enter_adjacency_list(int N, int M,  vector <int> adj_list[]);
void show_adjacency_list(int N, int M,  vector <int> adj_list[]);

int main()
{
    // Nhap ma tran ke 
    int N, M;
    int adj[100][100];
    cout << "Nhap so dinh va canh ";
    cin >> N >>M;
    vector <int> adj_list [1000];
    enter_adjacency_list(N, M, adj_list);
    // show_adjacency_list(N, M, adj_list);
    return 0;
}

void enter_adjacency_list(int N, int M, vector <int> adj_list[])
{
    int s, d;
    for(int i=0; i<M; i++){
        cout << "Nhap canh ";
        cin >> s >> d;
        adj_list[s].push_back(d);
    
    }
    
}

void show_adjacency_list(int N, int M,  vector <int> adj_list[]){
   for (int i = 0; i < vertex; i++)
  {
    cout << "Dinh " << i << " Co canh: ";
    for (int j = 0; j < adj_list[i].size(); j++)
    {
      cout << adj_list[i].at(j) << " ";
    }
    cout << "\n";
  }
}


void enter_edge_list(int N, int M, vector <pair<int, int>> &edge_list){
    // duyet danh sach ke va nhap vao
    int s, d;
    for(int i=0; i<M; i++){
        cout << "Nhap canh ";
        cin >> s >> d;
        edge_list.push_back({s,d});
    } // nhap canh
    
}

void show_edge_list(int N, int M, vector <pair<int, int>> edge_list){
    int s, d;
    for (auto i: edge_list)
        cout << i.first << ' ' << i.second << endl;
}

void enter_adjacency_matrix(int N, int M, int adj[][100]){
    // #1 khoi tao ma tran = 0
    adj[N][N] = 0;
    int a,b;
    for (int i=0;i<M;i++)
    {
        cout<<"Nhap 2 dinh tao nên canh thu "<<i+1<<":\n";
        cout<<"Ðinh thu 1:";
        cin>>a;
        cout<<"Ðinh thu 2:";
        cin>>b;
        adj[a][b]=1;
    }
    
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }  
}