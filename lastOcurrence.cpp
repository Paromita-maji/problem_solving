//Find the last occurrence of an element x in a given array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(7);
    int size=v.size();
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    int occurrence=-1;
    for(int i=0;i<size;i++){
        if(v[i]==x){
            occurrence=i;
        }
    }
    cout<<occurrence<<'\n';
    return 0;
}