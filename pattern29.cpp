#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
        while(row <= n){
            int col = 1;
                while(col <= (n-row+1)){
                    cout<<col;
                    col = col + 1;

                }
                int start = 1;
                while(start<=(row-1)){
                    cout<<"*";
                    start = start + 1;
                }
               int star = 1;
               while (star<=(row-1))
               {
                cout<<"*";
                star = star + 1;
               }
               int num = 1;
               while(num<=(n-row+1)){
                cout<<(col-1);
              num = num + 1;
              col = col - 1;
               }

                cout<<endl;
                row = row + 1;
        }
}