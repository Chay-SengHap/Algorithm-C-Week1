#include <iostream>


using namespace std;

int main(){
    int a , b , c;
    cout<<"Enter 3 Number : ";cin>>a;cin>>b;cin>>c;
     if (a >= b && a >= c)
        cout<<"Maximum is "<<a<<endl;
    else if (b >= a && b >= c)
        cout<<"Maximum is "<<b<<endl;
    else
        cout<<"Maximum is "<<c<<endl;

    return 0;

}