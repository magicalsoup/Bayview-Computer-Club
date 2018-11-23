// link : https://dmoj.ca/problem/ccc14j2
#include <iostream>

using namespace std;
int square[4][4]; bool magic = true;
int main()
{
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin>>square[i][j];
    int preSum = square[0][0] + square[0][1] + square[0][2] + square[0][3];
    for(int i = 0; i < 4; i++){
        int rowSum = 0, colSum = 0;
        for(int j = 0; j < 4; j++){ rowSum += square[i][j]; colSum += square[j][i];}
        if(rowSum != preSum || colSum != preSum){magic = false; break;}
    }
    if(magic) cout<<"magic"<<endl; else cout<<"not magic"<<endl;
    return 0;
}
