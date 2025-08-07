#include <iostream>
using namespace std;


int main(){
    string password ="admin123";
    string input;

    cout<<"Enter a password : ";cin>>input;

    if(input == password){
        cout<<"Log in Succesfully"<<endl;
    }else{
        cout<<"Incorrect Password"<<endl;
    }

    return 0;
}