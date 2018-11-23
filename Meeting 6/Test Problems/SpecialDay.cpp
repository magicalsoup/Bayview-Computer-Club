// link : https://dmoj.ca/problem/ccc15j1
#include <iostream>

using namespace std;
int a, b;
int main()
{
    cin>>a>>b;
    if(a <= 2){
        if(a == 1 || b < 18){
            cout<<"Before"<<endl;
        }
         else if(b == 18){
            cout<<"Special"<<endl;
        }
        else{
            cout<<"After"<<endl;
        }
    }
    else{
        cout<<"After"<<endl;
    }
}
