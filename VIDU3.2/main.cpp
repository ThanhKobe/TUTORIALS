//Coder by: ThanhKobe
// Chuong trinh nhap 2 so nguyen 
// Tao ra hinh chu nhat
#include <iostream>

using namespace std;

int main(){
    int M, N; // M la hang  - N la cot
    cout << "Nhap vao so dong M";
    cin >> M;

    cout << "Nhap vao so cot N";
    cin >> N;

    for(int i=1; i<=M; i++)  {
        for (int j=1;j<= N; j++)
            cout <<"*";
            cout << endl; // dud con tro ve dau dong
        
    }
    return 0;
}