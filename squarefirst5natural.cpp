//Write a function to print squares of the first 5 natural numbers.
#include<bits/stdc++.h>
using namespace std;

int square(int x){
    return x*x;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<=n;i++){
cout<<square(i)<<'\n';
    }
    return 0;
}