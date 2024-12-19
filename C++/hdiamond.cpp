#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rowno=1;
    while(rowno<=n){
        if(rowno==1){
        for(int i=1; i< 2*n;i++){
            cout<<"*";
        }
        cout<<endl;
        }
        else{
          for(int i=1; i<=(n+1-rowno);i++){
            cout<<"*";
        }
        for(int i=1; i<=(2*(rowno-1)-1);i++){
            cout<<" ";
        } 
         for(int i=1; i<=(n+1-rowno);i++){
            cout<<"*";
        }
        cout<<endl;
        }
        rowno++;
    }
    while(rowno<2*n){
        if(rowno==(2*n-1)){
         for(int i=1; i< 2*n;i++){
            cout<<"*";
        }
        cout<<endl;
        }
        else{
  for(int i=1; i<=(n+1-(2*n-rowno));i++){
            cout<<"*";
        }
        for(int i=1; i<=(2*((2*n-rowno)-1)-1);i++){
            cout<<" ";
        }
          for(int i=1; i<=(n+1-(2*n-rowno));i++){
            cout<<"*";
        }
        cout<<endl;
        }
        rowno++;
    }
    return 0;
}