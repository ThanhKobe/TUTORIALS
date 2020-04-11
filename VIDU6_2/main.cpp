#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main(){
    int *pi;
    unsigned n;
    cout << "Nhap vao so phan tu ";
    cin >> n;
    pi = new int[n];

    if (pi == NULL){
        cout << "khong du bo nho!";
        exit(0);

    }

    for (int i=0;i<n;i++){
        cout << "Nhap phan tu thu " << i+1 << ":";
        cin >> *(pi+i);
    }

    cout << endl << "cac so chan nhap vao la " << endl;
    for(int i=0;i < n;i++)
        if(*(pi+i)%2==0)
            cout << setw(5) << *(pi+i);
    
    cout << endl << "cac so le nhap vao la " << endl;
    for(int i=0; i < n;i++)
        if(*(pi+i)%2==1)
            cout << setw(5) << *(pi+i);
    
    delete pi;
    return 0;
}