// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n){
    if (n==0 or n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int ncr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int ap(){
    int n;
    cin>>n;
    return (3*n +7);
}

int setbit(){
    int a,b;
    cin>>a>>b;
    int s = 0;
    while (true){
        if(a%2==1) s++;
        if(b%2==1) s++;
        a/=2;
        b/=2;
        if(a==0 && b==0) break;
    }
    return s;
}

int fibonacci(){
    int n, a=0, b=0,c=0;
    cin>>n;
    // if(n==1){
        
    // }
    // if(n==2){
    //     b=1;
    // }
    
        for(int i=1;i<=n;i++){
            if(i==1){
                b=0;
            }
            if(i==2){
        b=1;
    }
    if(i>2){
            c=b;
           
            b=b+a;
            a=c;
    }
        }
    
    return b;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int f = ap();
    cout<<f;

    return 0;
}