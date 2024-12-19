#include<iostream>
using namespace std;
int main() {
	int n1,n2,n3,l;
    cin>>n1>>n2>>n3;
    if(n1>n2){
        l=n1;
        if(l>n3){
            cout<<l;
            return 0;
        }
        else{
            l=n3;
            cout<<l;
            return 0;
        }
    }
    else{
        l=n2;
        if(l>n3){
            cout<<l;
            return 0;
        }
        else{
            l=n3;
            cout<<l;
            return 0;

    }
    }
    return 0;
}