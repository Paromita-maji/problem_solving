//Given the age of a person , write a function to check if the person is eligible to vote or not.
#include<bits/stdc++.h>
using namespace std;

bool checkEligibility(int age){
    if(age<18){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int age;
    cin>>age;
    int eligible=checkEligibility(age);
    if(eligible){
        cout<<"Yes you are eligible"<<'\n';
    }
    else{
        cout<<"No you are not eligible"<<'\n';
    }
    return 0;
}