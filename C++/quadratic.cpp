#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int d= (b*b-4*a*c);
    if(d>0) {
        cout<<"Real and Distinct"<<endl;
        int ans1 = (-b + sqrt(d))/(2*a);
        int ans2 = (-b - sqrt(d))/(2*a);
        if(ans1<ans2){
        cout<<ans1<<' '<<ans2;
        }
        else{
        cout<<ans2<<' '<<ans1;
        }
    }
    if(d==0) {
        cout<<"Real and Equal"<<endl;
        int ans = -b/(2*a);
        cout<<ans<<' '<<ans;
        }
    if(d<0) {
        cout<<"Imaginary";
    }
    return 0;
}