#include <iostream>

using namespace std;

int main(){
    float a,b;
    char kt ; //kt : ky tu

    cout << "nhap vao 2 gia tri a va b " << endl;
    cin >> a >> b;

    cout << "\n Chuong trinh thuc hien phep tinh so hoc: " << endl;
    cout << "\n 1.Go dau + de thuc hien phep tinh cong: " << endl;
    cout << "\n 2.Go dau - de thuc hien phep tinh tru: " << endl;
    cout << "\n 3.Go dau * de thuc hien phep tinh nhan: " << endl;
    cout << "\n 4.Go dau / de thuc hien phep tinh chia: " <<endl;

    cin >> kt ;

    switch (kt)
    {
    case '+':   
        cout << "Thuc hien phep cong: " << a+b ;
        break;
    case '-':
        cout << "Thuc hien phep tru: " << a-b;
        break;
    case '*':
        cout << "Thuc hien phep nhan: " << a*b;
        break;
    case '/':
        cout << "Thuc hien phep chia: " << a/b;
        break;

    default:
        cout << "ban da chon khong dung phep toan:";
        break;
    }
    return 0;
    
}