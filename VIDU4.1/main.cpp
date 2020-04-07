#include <iostream>

using namespace std;
int main()
{
    int n, a[100],s=0;

    cout << "Nhap gia tri n: ";
    cin >> n;

    cout << "Nhap vao n so nguyen: ";
    for(int i =0; i < n; i++)
    cin >> a[i];

    for(int i=0; i<n;i++)
        s+= a[i];
        cout << "tong la " << s;

    int sd=0, sk=0, sa=0;
    for (int i=0; i<n; i++)
    if (a[i]>0)
        sd++;
    else if (a[i]==0)
         sk++;
    else
        sa++;

    cout << "\n so luong so duong la: " <<sd;
    cout << "\n so luong so khong la: " <<sk;
    cout << "\n so luong so am la: " << sa;

    return 0;

} 
