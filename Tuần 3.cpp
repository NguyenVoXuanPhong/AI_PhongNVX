#include <iostream>

using namespace std;

void enterTable(int , int [][100]);
void showTable(int , int [][100]);
void assignTask(int, int [][100], int []);
void assignTaskOp2(int, int [][100], int []);
int getMinTime(int, int [][100], int [], int);
int findFirstIndex(int  [], int);
void showResults(int[], int);

int main()
{
    // b0: results[N]; Task [];
    int N;
    int results [100];
    int table [100][100];
    cout << "Nhap N ";
    cin >> N;
    enterTable(N, table);
    showTable(N, table);
    assignTask(N, table, results);
    // b1: nhap bang cong viec = nhap mang 2 chieu => function
    // op1: nguoi tim viec 
    // b2: Xet hang => for 
        // tim gia tri nho nhat => function call assignTask
        // khong xet nhung cot da chon
        // -> results = [5, 2, ....]
    // op2: viec tim nguoi
    //  .................
    // b3: xuat ket qua 
    showResults(results, N);
    return 0;
}

void assignTaskOp2(int, int [][100], int []){
    // CODE HERE 
}

void enterTable(int N, int table[][100]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
        {
            cout << "Nhap " << i << " " << j << " ";
            cin >> table[i][j];
        }
    }
}

void showTable(int N, int table[][100]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}

void assignTask(int N, int table [][100], int results []){
    int task[N] ={0}; // danh sach task da lam (1) hay chua (0) 
    for(int i=0; i<N; i++){
        // staff i th = row i th -> task -> min value -> function 
        int t = getMinTime(i, table, task, N);
        task[t] = 1;
        results[i] = t;
    }
}

void showResults(int results[], int N){
    for(int i=0; i<N; i++){
        cout << "Staff " << i +1 << ": " << results[i] +1 << endl;
    }
}

int getMinTime(int row, int table[][100], int task[], int N){
    // find first index 
    int minIndex = findFirstIndex(task, N);
    for(int j=0; j<N; j++){
        if(table[row][j] < table[row][minIndex] && task[j]==0 ){
            minIndex = j;
        }
    }
    return minIndex;
}

int findFirstIndex(int task [], int N)
{   
    for(int i=0; i<N; i++){
        if(task[i] == 0){
            return i;
        }
    }
    return -1;
}
