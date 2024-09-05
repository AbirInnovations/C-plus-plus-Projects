#include<iostream>
using namespace std;
#define N 9

int main(){
    int age[N];
    for(int i=0;i<N;i++){
        cin>>age[i];
    }

    cout<<"Printing the Element of Array"<<endl;
    for(int i=0;i<N;i++){
        cout<<age[i]<<endl;
    }

    cout<<"Array in reverse order"<<endl;
    for(int i=N-1;i>=0;i--){
        cout<<age[i]<<endl;
    }



    return 0;

}
