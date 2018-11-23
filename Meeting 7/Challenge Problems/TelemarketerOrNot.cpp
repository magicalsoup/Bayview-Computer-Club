// link : https://dmoj.ca/problem/ccc18j1
#include <iostream>

using namespace std;
int a, b, c, d;
int main()
{
    cin>>a>>b>>c>>d;
    if((a == 8 || a == 9) && (d == 8 || d == 9) && b == c){
        cout<<"ignore"<<endl;
    }
    else{
        cout<<"answer"<<endl;
    }
    return 0;
}
