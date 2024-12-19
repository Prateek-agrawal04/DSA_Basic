// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i!=n+1){
        sum+=i;
        i++;
    }
cout<<sum;
    return 0;
}