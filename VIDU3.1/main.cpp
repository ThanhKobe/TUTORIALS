//Coder: Thanh Kobe
//Tim so nguyen to

#include <iostream>

int main(){
    int n,d = 0;
    std::cout <<"Nhap gia tri vao chuong trinh: " << std::endl;
    std::cin >> n;

    for(int i =1; i<=n; i++)
        if (n%i==0)
        d++;
        if (d==2)
            std::cout << "n la so nguyen to ";
        else
            std::cout<<"n khong phai la so nguyen to";
        

}
