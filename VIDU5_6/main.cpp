#include<iostream>

using namespace std;

long giaithua(int n){
    long giai_thua = 1;
    for(int i=1; i<n; i++)
        giai_thua *=i;
    return giai_thua;

}
int main(){
    int n;
    cin >> n;
    cout << "giai thua " << n << "la: "<< giaithua(n);
    return 0;
}