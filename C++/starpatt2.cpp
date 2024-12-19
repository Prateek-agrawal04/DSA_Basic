#include <iostream>
using namespace std;
int main(){
    int trows;
    cin>>trows;
    int rowno=1;
    while(rowno<=trows){
        int sp=1,st=1;
        while(sp<=trows-rowno){
            cout<<"  ";
            sp++;
        }
        while(st<=rowno){
            cout<<"* ";
            st++;
        }
        cout<<endl;
        rowno++;
    }

}