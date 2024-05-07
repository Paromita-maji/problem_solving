#include<bits/stdc++.h>
using namespace std;
//find the sum of 1 to N
int main(){
       int n;
       cin>>n;
       int sum=0;

       for(int i=1;i<=n;i++){
        sum+=i;
       }
       cout<<"The sum of 1 to N is: "<<sum<<'\n';
       return 0;
}