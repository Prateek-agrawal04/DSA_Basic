#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int sum=0;
    int i;
    for(i=0; i<100; i++){
        cin>>arr[i];
        sum+= arr[i];
        if(sum>=0){
            continue;
        }
        else{
            break;
        }
    }
    for(int j=0; j<i; j++){
        cout<<arr[j]<<endl;
    }

    return 0;
}