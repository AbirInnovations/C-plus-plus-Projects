#include<iostream>
using namespace std;
int main(){

int x, totalstudent[50] ;
int highestmark,secondhighest;

cout<<"Submit Number of Students: ";
cin>>x;
for(int i=0; i<x; i++){
    cout<<"Enter Student Marks"<<(i+1)<<":";
    cin>>totalstudent[i];

}
if(totalstudent[0]<totalstudent[1]){
     highestmark=totalstudent[1];
    secondhighest=totalstudent[0];

}
else{
     highestmark=totalstudent[0];
    secondhighest=totalstudent[1];

}
for(int i=2; i<x; i++){
    if(totalstudent[i]>highestmark){
        secondhighest=highestmark;
        highestmark=totalstudent[i];

    }
    else if(totalstudent[i]>secondhighest&&totalstudent[i]!= highestmark){
        secondhighest= totalstudent[i];
          }
}
cout<<"Highest Mark is: "<<highestmark<<endl;
cout<<"Second Highest Mark is: "<<secondhighest;
return 0;
}