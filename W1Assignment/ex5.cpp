#include <iostream>


using namespace std;

int main(){
  
    int num;
    cout<<"input a Number : ";cin>>num;
    
    if(num % 3 == 0 && num %5 == 0 ){
        cout<<num<<" can be multiple of 3 and 5"<<endl;
    }else{
        if(num % 3==0){
            cout<<num<<" can be multiple of 3 only"<<endl;
        }
        else if(num % 5==0){
            cout<<num<<" can be multiple of 5 only"<<endl;
        }
        
    }




    return 0;

}