//Q1. To check if a number is prime or not
#include<iostream>
using namespace std;

int main(){
    int i, n=5;
    bool isprime = true;
    
    for (i=2; i<=n-1; i++) {
        
        if (n%i==0){
            isprime=false;
            break;
        }
    }
    
    if (isprime==true){
        cout<<"Prime";
    }
    
    else {
        cout<<"Non-Prime";
    }
}