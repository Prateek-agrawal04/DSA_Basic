#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void swpalternat(int arr[], int n){
    for(int i=0; i<n; i=i+2){
       swap(arr[i], arr[i+1]);
    }
}

void reverse(int arr[], int n){
for(int i=0; i<n/2; i++){
        int c= arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = c;
    }
}

int main(){
    int arr[100] = {13,45,6,23,4,8};
    int n =6;
    print(arr, n);
    cout<<endl;
    reverse(arr, n);
    print(arr, n);
    cout<<endl;
    swpalternat(arr, n);
    print(arr, n);
    return 0;
}