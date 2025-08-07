#include <iostream>


using namespace std;

int main(){
   int choice;
   float a , b , result ;

    cout<<"1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";cin>>choice;
    cout<<"Enter 2 Numbers : ";cin>>a;cin>>b ;

    if(choice ==1 ){
        result = a+b;
    }else if(choice==2){
        result = a - b;
    }else if(choice == 3){
        result = a * b;
    }else if (choice == 4){
        if(b!=0){
            result = a/b;
        }else{
            cout<<"Error"<<endl;
            return 1;
        }
    }else{
        cout<<"invalid Choice"<<endl;
        return 1;

    }

    cout<<"result : "<<result;

    return 0;

}