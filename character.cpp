#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
    char WORD[350], alphabet; int characternumber;
    cout<<"submit the alphabet you must want: "; cin>>alphabet;
    cout<<"submit how many characters you want: "; cin>>characternumber;
    cout<<"submit the word: "; cin>>WORD;

int x;
    x=strlen(WORD);
    if(x==characternumber&&WORD[0]==alphabet)
    cout<<"Given WORD exists.";
    else
    cout<<"Given WORD doesn't exist.";

 return 0;
}
