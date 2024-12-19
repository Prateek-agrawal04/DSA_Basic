#include <iostream>
#include<cmath>
using namespace std;

bool power(int n){
int i =0;
    while(true){
        if(n= pow(2,i)) return true;
        if(n< pow(2,i)) return false;
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    
    int i =0;
    while(true){
        if(n< pow(2,i)){
            cout<<false;
            return 0;
        }
        if(n= pow(2,i)){
            cout<<true;
            return 0;
        }
        i++;
    }
    
}