#include <iostream>
using namespace std;
int main(){
    int trows;
    int rowno=1;
    cin>>trows;
    while(rowno<= trows){
        if(rowno==1){
            for(int i=1;i<trows;i++){
                cout<<" ";
            }
            for(int i=1;i<=trows;i++){
                cout<<"*";
            }
            cout<<endl;
        }
        else if(rowno==trows){
            for(int i=1;i<=trows;i++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
           for(int i=1;i<=trows-rowno;i++){
                cout<<" ";
            }
            cout<<"*";
            for(int i=1;i<=trows-2;i++){
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
        rowno++;
    }
    return 0;
}