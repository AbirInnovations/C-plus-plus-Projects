#include<iostream>
using namespace std;

int main(){

    int number;
    int i;
    cin>>number;//10

    for(i=0 ; i<number ;  i = i+1 ){//8
        if(i==5){
            break;
        }

        if(i==8){
            continue;
        }
        cout<<"Value of i : "<<i<<endl;
    }

return 0;
}
