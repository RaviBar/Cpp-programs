#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    
    int count =1;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<j;
            j = j+ 1;
        }
        cout<<count;
        count += 1;
        cout<<endl;
        i = i+1;
    }
}