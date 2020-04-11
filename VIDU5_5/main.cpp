#include<iostream>
#include<iomanip>

using namespace std;

int x[1000];
int m, dem=0;


void xuat(){
    cout << ++dem << setw(4);
    for (int i=1;i<=m;i++)
    cout <<x[i]<<setw(4);
    cout << endl;

}

void duyetnhiphan(int i){
    for (int j=0;j<=1;j++)
        {
            x[i]=j;
            if(i==m)
                xuat();
            else
                duyetnhiphan(i+1);
        }
}

int main(){
    cout <<"Nhap m =: ";
    cin >> m;
    duyetnhiphan(1);        
}