#include <iostream>
#include <unistd.h>
using namespace std;


int main(){
string username = "admin" , pw = "1234";
string inputname , inputpw;
for ( int  i = 2 ; i >= 0 ; i--){
    cout<<"You have "<<i+1<<" attemps"<<endl;
    cout<<"Please input ur username : ";cin>>inputname;
    cout<<"Please input ur paswword : ";cin>>inputpw;
    if (inputname == username && inputpw == pw){
        cout<<"Access Granted"<<endl;
        break;
    }else{
        cout<<"AccessDenied"<<endl;
    }
    if(i == 0){
        cout<<"Login Attempt currently out please wait 10s"<<endl;
        sleep(2);
        for(int i = 1 ; i < 11 ; i++){
            cout<<i<<endl;
            sleep(1);
            system("cls");
        }
       i =3;
    }
}


    return 0;
}