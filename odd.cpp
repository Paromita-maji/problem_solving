//Given two  numbers a and b , WAP using function to print all the odd number between them.
#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n){
    if(n%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<'\n';
        }
    }
    return 0;
}