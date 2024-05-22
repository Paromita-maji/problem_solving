//Given two no. a and b, WAP to print all the prime no present between a and b.

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<'\n';
        }
    }
    return 0;
}