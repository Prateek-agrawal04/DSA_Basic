#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int l= min(n1,n2);
    // cout<<l<<endl;
    int i=1;
    int ans;
    while(i<=l){
        // cout<<i<<endl;
        if(n1%i==0 and n2%i==0){
            ans= i;
            // cout<<i<<endl;
        }
        i++;
    }
    cout<<ans;
    return 0;
}