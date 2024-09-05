#include<iostream>
using namespace std;

int main(){



 /*


 asdasd


 asdasdas


 */


    //data_type array_name [size]
    int n;
    float a[n];
    cin>>n;
    float sum=0;
    //how to access array??
    //array_name[index]
    // indexing stats from first_index=0 ends at last_index = size-1

    for(int i=0;i<n;i++){//i=i+1
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }

    cout<<"Sum : "<<sum<<endl;

    cout<<"Array in Reverse order"<<endl;
    for(int i=n-1; i>=0; i--){
    
        cout<<a[i]<<endl;
    }


    return 0;
} 

