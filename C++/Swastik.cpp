#include <iostream>
using namespace std;
int main(){
    int trows;
    cin>>trows;
    int rowno=1;
    cout<<"* ";
    int sp=1, st=1;
    while(sp<=(trows-3)/2){
        cout<<"  ";
        sp++;
    }
    while(st<=(trows+1)/2){
        cout<<"* ";
        st++;
    }
    cout<<endl;
    while(rowno<=(trows-3)/2){
        cout<<"* ";
        sp=1;
        while(sp<=(trows-3)/2){
        cout<<"  ";
        sp++;
    }
    cout<<"* ";
    cout<<endl;
    rowno++;
    }
    int i=1;
    while(i<=trows){
        cout<<"* ";
        i++;
    }
    cout<<endl;
    rowno=1;
    while(rowno<=(trows-3)/2){
        sp=1;
        while(sp<=(trows-1)/2){
            cout<<"  ";
            sp++;
        }
        cout<<"* ";
        sp=1;
        while(sp<=(trows-3)/2){
        cout<<"  ";
        sp++;
    }
    cout<<"* "<<endl;
    rowno++;
    }
   st=1, sp=1;
   while(st<=(trows+1)/2){
        cout<<"* ";
        st++;
    }
    while(sp<=(trows-3)/2){
        cout<<"  ";
        sp++;
    }
    cout<<"* "; 
    return 0;
}