#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char chuoi[100];

    cout <<"Nhap va chuoi bat ky: \n";
    int dem = 0;
    cin.getline(chuoi,100);
    int l = strlen(chuoi);

    for(int i=0; i<l; i++)
        if(chuoi[i]==' '&&chuoi[i+1]!=' ')
        dem++;
    if(chuoi[0]!=' ')
        dem++;
    if(chuoi[l-1]==' ')
        dem--;
    
    if(l!=0)
        cout << "\n So tu co trong chuoi" << dem;
    else
        cout<<"Chuoi rong"<< endl;

    //delete chuoi;
    return 0;


}