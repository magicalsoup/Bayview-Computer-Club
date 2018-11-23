// link : https://dmoj.ca/problem/ccc16j3
#include <iostream>

using namespace std;
int square[4][4]; bool magic = true;
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    int arr[n + 1][n + 1];
    for(int i = 0; i <= n; i++){arr[0][i] = 0; arr[i][0] = 0;}
    int max  = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(str[i - 1] != str[(n - 1) - (j - 1)]){arr[i][j] = 0;}
            else{arr[i][j] = arr[i - 1][j - 1] + 1;}
            if(arr[i][j] > max){max = arr[i][j];}
        }
    }
    cout<<max<<endl;
    return 0;
}
