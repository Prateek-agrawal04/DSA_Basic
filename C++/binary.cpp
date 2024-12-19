#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        int b;
        cin>>b;
        
        int no=0;
        for(int j=0;;j++){
            int bs=b%10;
            
            no=no + bs*pow(2,j);
            b=b/10;
            if (b==0){
                break;
            }
        }
        arr[i]=no;
        
    }
    for(int i=0;i<n;i++){

        cout<<arr[i]<<endl;
        
    }
    //cout<<arr<<endl;
	return 0;
}