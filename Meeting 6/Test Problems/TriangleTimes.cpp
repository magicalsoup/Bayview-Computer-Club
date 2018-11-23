// link : https://dmoj.ca/problem/ccc14j1
#include <iostream>

using namespace std;
int a, b, c;
int main()
{
    cin>>a>>b>>c;
    if(a + b + c == 180){
        if(a == b && b == c) cout<<"Equilateral"<<endl;
        else if(a == b || b == c || c == a) cout<<"Isosceles"<<endl;
        else cout<<"Scalene"<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
}
