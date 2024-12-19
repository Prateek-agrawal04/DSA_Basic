#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e=0,o=0;
    int i=1;
    while(n!=0){
    int rem= n%10;
    // cout<<rem;
    n=n/10;
    // cout<<n;
    if(i%2==0){
        e+=rem;
        // cout<<e;
    }
    else{
        o+=rem;
        // cout<<o;
    }
    i++;   
    }
    cout<<o<<endl;
    cout<<e<<endl;
    return 0;
}