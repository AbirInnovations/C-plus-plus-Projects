#include<iostream>
using namespace std;

//returnType functionName (parameterList){ body };
void helloMsg(){
    cout<<"Hello John"<<endl;
}

float percentage(float m1, float m2, float m3, float m4){
    float total = m1+m2+m3+m4;
    float per = (total/400)*100;
return per;
}

int findMax(int a[], int size){
    int maxValue=0;
    //find the max from a array;
    for(int i=0;i<size;i++){
        if(maxValue<a[i]){//32<15
            maxValue=a[i];//maxvalue=34
        }
    }
    return maxValue;
}

int main(){
    helloMsg();
    cout<<percentage(80,78.5,98,77)<<endl;

    int arr[5] = {22,34,21,12,15};

    cout<<findMax(arr,5)<<endl;



return 0;
}
