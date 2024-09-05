#include<iostream>
using namespace std;

int main(){

    // for(initialization; condition; update){ body }
    /*
        1. initialization
        2. condition
        3. if condition is true then go to for's body
        4. when for's body is completed control goes to update
        5. after update go to condition
        6. if condition is true go to step 3
        7. if condition is false loop is exited

    */
    int i;
    int count=0;
    int N;
    cin>>N;//5
//10th
//1 5 9 13 17
    for(i=1;count<N; i=i+4 ){//i=21
        if(i%3==0){
        cout<<i<<endl;
        }
        count = count+1;//5
    }
return 0;
}
