#include<bits/stdc++.h>
using namespace std;
//Find the factorial of N

int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of N is: "<<fact<<'\n';
    return 0;
}
