#include <iostream>
using namespace std;

int sqrtinteger(int n){
int s=0, e=n;
long long int ans=-1;
long long int m= s+ (e-s)/2;
while(s<=e){
    long long int sqr = m*m;
if((sqr)==n){
    return m;
}
else if((sqr)< n){
    ans = m;
    s=m+1;
}
else{
    e= m-1;
}
m= s+ (e-s)/2;
}
return ans;
}
double precisionsol(int n, int precise, int tempsol){
double factor = 1;
double ans =tempsol;
for(int i=0; i<precise; i++){
    factor = factor/10;
for(double j= ans; j*j<n; j+= factor){
    ans = j;
}
}
return ans;
}
int main(){
    int n,p;
    cout<<"Enter No. and precision";
    cin>>n>>p;
    int tempsol = sqrtinteger(n);
    cout<<"Answer is: "<<precisionsol(n,p,tempsol);
    return 0;
}