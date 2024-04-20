#include<iostream>
using namespace std;

int main(){
    char ch;
    
    cin>>ch;
    int ascii = ch;

    if(ascii>=48 && ascii<=57){
        cout<<"this is numeric";
    }
    else if(ascii>=65 && ascii<=90){
        cout<<"This is uppercase";
    }
    else if(ascii>=97 && ascii<= 122){
        cout<<"THis is lowercase";
    }

    else{
        cout<<"somehthing else";
    }
}