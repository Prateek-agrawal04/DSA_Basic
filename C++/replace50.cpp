#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    //cout<<n<<endl;
    int c=0,i=0;
    while(n>0){
        int t=0;
        t=n%10;
        n=n/10;
        
        if(t==0){
            t=5;
        }
        //cout<<t<<"  "<<n<<endl;
        int p=pow(10,i);
        if(p==99){
            p++;
        }
        c=c+t*p;
        i++;
    }
    cout<<c;
    return 0;
}
