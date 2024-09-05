#include<iostream>
using namespace std;
    int main()
    {
        int subject;
        float marks,total=0,average;
        cout<<"Give total subjects:";
        cin>>subject;
        cout<<"Give your marks:"<<endl;
        for(int i=0;i<subject;i++){
            cin>>marks;
            total=total+marks;
        }
        average=total/subject;
        cout<<"Total marks"<<total;
        cout<<"average marks"<<average;
        return 0;
    }
