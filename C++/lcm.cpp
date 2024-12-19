#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int i=1;
    while(true){
        if(i%n1==0 and i%n2==0){
            cout<<i;
            break;
        }
        else{
            i++;
        }
    }
    return 0;
}