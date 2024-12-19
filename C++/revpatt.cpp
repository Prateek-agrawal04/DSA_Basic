#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int rev=n%10;
    //cout<<rev<<endl;
    int i=1;
    while (true){
        n=n/10;
        if(n==0){
            break;
        }
        rev=rev*(10)+n%10;
        //cout<<n<<endl;
        
    }
   cout<<rev<<endl;
	return 0;
}