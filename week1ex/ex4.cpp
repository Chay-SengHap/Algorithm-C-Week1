#include <iostream>


using namespace std;

int main(){
   int n , i =1;
   cout<<"Enter a Number : ";cin>>n;

   while (i <=n){
    if ( i % 2 == 0 ){
        cout<<i<<" is even"<<endl;
        
    }
    i++;
   }

    return 0;

}