//Given radius of a circle , write a function to print the area and circumference of the circle.
//area=pi*r*r      ,,          circumference=2*pi*r
#include<bits/stdc++.h>
using namespace std;

double area(int r){
    return 3.14*r*r;
}
double circumference(int r){
    return 2*3.14*r;
}
int main()
{
    int r;
    cin>>r;
    cout<<area(r)<<" "<<circumference(r)<<'\n';
    return 0;
}
