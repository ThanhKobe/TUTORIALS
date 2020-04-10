#include<iostream>

using namespace std;

int main(){
    int f[100];
    int n;

    cout << "muon biet so hang thu may cua day?";
    cin >> n;
    f[1]=f[2]=1;
    for (int i=3;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
    cout << f[n];
    return 0;
}