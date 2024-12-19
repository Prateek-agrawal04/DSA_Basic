#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int n=1;
    int i=0;
    while(i<n1){
        int ans= 3*n+2;
        n++;
        if(ans%n2 !=0){
            cout<<ans<<endl;
            i++;
        }
    }
    return 0;
}