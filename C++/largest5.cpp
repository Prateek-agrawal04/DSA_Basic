#include <iostream>
using namespace std;
int main(){
    int ans= INT16_MIN;
    int n;
    for(int i=0; i<5; i++){
        cin>>n;
        // cout<<" ";
        if(n> ans){
            ans= n;
        } 
    }
    cout<<ans;
    return 0;
}