#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b;
    double c;
    cin>>a;
    cin>>b;
    c=(a+b)/2;
    cout<<"Average of "<<a<<" and "<<b<<" is: "<<fixed<<setprecision(2)<<c;
}