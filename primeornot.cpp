#include<bits/stdc++.h>
using namespace std;
//Check the given number is prime or not.

bool isprime(int n){
    if(n<=1){
        return false;
    }
for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"It is a prime number"<<'\n';
    }
    else{
        cout<<"It is not a prime number"<<'\n';
    }
    return 0;
}