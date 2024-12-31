// Q2 to find the sum of all n numbers divisible by 3.
#include<iostream>
using namespace std;

int main(){
    int sum=0, n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=3; i<=n; i++){
        if (i%3==0){
            sum+=i;
        }
    }
    cout<<sum;

    return 0;
}