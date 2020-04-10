#include <iostream>

using namespace std;

long giaithua(int n){
    if (n==0||n==1)
        return 1;
    else
        return (n*giaithua(n-1));
}
////////
int main(){
    int n;
    cin >> n;
    cout << "Giai Thua " << n << "la: "<< giaithua(n);
    return 0;
    
}