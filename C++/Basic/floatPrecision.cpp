#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    float a = 3576.76754646484684844646468468468;
    printf("%.2f\n",a); //printing 3576.77
    cout<<std::setprecision(2)<<a<<endl; //printing 3.6e+003
    cout<<round(a*100)/100.0<<endl;; //printing 3.6e+003
    cout<<((int)(a*100.0 + 0.5F)) / 100.0F; //printing 3.6e+003

    return 0;
}