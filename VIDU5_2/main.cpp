#include<iostream>
#include<math.h>
#include<iomanip> //std::setw

void nhap(int a[],int &n);
void xuat(int a[],int n);
int nguyento(int n);
int demsonguyento(int a[], int n);

int main(){
    int n,a[100];
    nhap(a,n);
    xuat(a,n);

    std::cout<<" so luong cac nguyen to trong mang la: "<<  demsonguyento(a,n);

    return 0;
}

void nhap(int a[],int &n){
    std::cin >> n;
    for (int i=0; i<n; i++)
        std::cin>>a[i];
}

void xuat(int a[],int n){
    std::cout << std::endl;
    for (int i=0; i<n; i++)
    std::cout << a[i] << std::setw(4);
}

int nguyento(int n){
    int d=0;
    for (int i=0;i<=n;i++)
        if(n%i==0)
        d++;
    
    return(d==2);
}

int demsonguyento(int a[], int n){
    int d=0;
    for (int i=0;i<n;i++)
        if(nguyento(a[i]))
            d++;
    return d;
}