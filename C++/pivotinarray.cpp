#include <iostream>
using namespace std;

int pivot(int arr[], int n){
int s=0, e=n-1;
int m = s+ (e-s)/2;
while(s<e){
    // if(arr[m]< arr[m+1] and arr[m]< arr[m-1]){
    //     return m;
    // }
    // else if(arr[m]> arr[0]){
    //     s= m+1;
    // }
    if(arr[m]> arr[0]){
        s= m+1;
    }
    else{
        e=m;
    }
    m = s+ (e-s)/2;
}
return s;
}

int main(){
    int arr[] ={6,7,9,1,2,3,5};
    int n = sizeof(arr)/ sizeof(int);
    cout<<pivot(arr,n);
}