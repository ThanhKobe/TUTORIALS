//coder : ThanhKobe
//
#include<iostream>

int main()
{
    float a,b;
    std::cout << "Nhap vao 2 gia tri: ";
    std::cin >> a >> b;

    if(a!=0)
    std::cout << "phuong trinh co nghiem x = " << -b/a;

    else if (b!=0)
    std::cout << "phuong trinh vo nghiem x = " << std::endl;
    
    else
    std::cout << "phuong trinh vo nghiem ";

    return 0;


}