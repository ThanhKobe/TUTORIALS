#include<iostream>
#include<iomanip>

using namespace std;

int x[1000];
int m, dem=0;
void xuat();
void tim();

void xuat(){
    cout << ++dem << setw(4);
    for (int i=1;i<=m;i++)
    cout <<x[i]<<setw(4);
    cout << endl;

}

void tim(int i){
    for (int j=0;j<=1;j++)
        {
            x[i]=j;
            if(i==m) //neu tim den x i cuoi cung thi xuat ra ket qua
                xuat();
            else
                tim(i+1); //chua tim den i cuoi thi tang i len
        }
}

int main(){
    cout <<"Nhap m =: ";
    cin >> m;
    tim(1);      
}
