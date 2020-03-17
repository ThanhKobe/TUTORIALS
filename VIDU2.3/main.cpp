#include <iostream>

int main(){
    float a,b;
    char kt; // kt:ky tu
    float kq;

    std::cout << "Nhap gia tri 2 a va b : "; 
    std::cin >> a >> b;

    std::cout << "\n Chuong trinh thuc hien 4 phep toan so hoc";
    std::cout << "\n 1.Go dau + de thuc hien phep cong";
    std::cout << "\n 2.Go dau - de thuc hien phep tru";
    std::cout << "\n 3.go dau * de thuc hien phep tich";
    std::cout << "\n 4.go dau / de thuc hien phep chia";
    std::cout << "\n Hay nhap vao lua chon: " << std::endl;

    std::cin >> kt;
    if (kt=='+')
    std::cout << "ket qua la: " << a+b << std::endl;

    else if (kt=='-')
    std::cout << "ket qua la: " << a-b << std::endl;

    else if(kt=='*')
    std::cout << "ket qua la: " << a*b << std::endl;

    else if (kt=='/')
    std::cout << "ket qua la: "<< (float)a/b << std::endl;

    else 
    std::cout << "ban da chon khong dung phep toan ";

    return 0;
    
     
}