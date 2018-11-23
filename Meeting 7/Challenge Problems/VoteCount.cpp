// link : https://dmoj.ca/problem/ccc14j2
#include <iostream>

using namespace std;
int a, b = 0, d = 0;; char c;
int main()
{
    cin>>a;
    for(int i = 0; i < a; i++){
        cin >> c;
        if(c == 'A') b++;
        else d++;
    }
    if(b > d) cout<<"A"<<endl;
    if(d > b) cout<<"B"<<endl;
    if(b == d) cout<<"Tie"<<endl;
    return 0;
}
