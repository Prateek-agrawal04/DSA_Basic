#include <iostream>
using namespace std;
int main(){
    int trows;
    cin>>trows;
    int rowno=1;
    while(rowno<=(trows+1)/2){
        int sp=1, st=1;
        while(sp<=(trows+1)/2-rowno){
            cout<<"  ";
        sp++;
        }
        while(st<= 2*rowno-1){
            cout<<"* ";
        st++;
        }
        cout<<endl;
        rowno++;
    }
    rowno=1;
while(rowno<=(trows+1)/2-1){
    int sp=1, st=1;
    while(sp<=rowno){
        cout<<"  ";
        sp++;
    }
    while(st<=trows-2*rowno){
        cout<<"* ";
        st++;
    }
    cout<<endl;
    rowno++;
}
}