#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        int col = 1;
        int value = row;
        while(col<=row){
            cout<<value;
            value += 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

    // int i = 1;
    // int count = 0;
    // while(i<=n){
    //     int j = 1;
        
    //     while(j<=i){
    //         cout<<count+j;
    //         j = j +1;
    //     }
    //     count+=1;
    //     cout<<endl;
    //     i = i + 1;
    // }


}