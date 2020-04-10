#include<iostream>

using namespace std;

int fibonacci(int n){
    if (n==1||n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
    
}
////////
int main(){
    int n;
    cout <<"Nhap gia tri n: ";
    cin >> n;
    cout <<"so fibonacci thu" << n << "la: " << fibonacci(n);

    return 0;
}