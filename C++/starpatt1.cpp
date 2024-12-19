#include <iostream>
using namespace std;
int main(){
    int trows;
    cin>>trows;
    int rowno=1;
    while(rowno<=trows){
        int i=1;
        while(i<=rowno){
            cout<<'*'<<" ";
            i++;
        }
        cout<<endl;
        rowno++;
    }

}