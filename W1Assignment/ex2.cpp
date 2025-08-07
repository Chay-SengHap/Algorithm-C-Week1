#include <iostream>
using namespace std;


int main(){
    float num1 , num2;
    float result[4] = {0};
    cout<<"Input Two Number : ";cin>>num1>>num2;
    result[0] = num1 + num2;
    result[1] = num1 - num2;
    result[2] = num1 * num2;
    result[3] = num1 / num2;
    for (int i = 0 ; i < sizeof(result)/sizeof(result[0]) ; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}