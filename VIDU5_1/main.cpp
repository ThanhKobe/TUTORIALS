#include<stdio.h>
#include<iostream>
#define pi 3.1415

void dthinhtron();
void dthinhchunhat();
void dthinhvuong();
void dttamgiac();

int main()
{   int so;
    std::cout <<"Tinh dien tich hinh hoc " << std::endl;
    std::cout << "\n Nhan so 1 tinh dien tich hinh vuong";
    std::cout << "\n Nhan so 2 tinh dien tich chu nhat";
    std::cout << "\n Nhan so 3 tinh dien tich tam giac";
    std::cout << "\n Nhan so 4 tinh dien tich hinh tron" <<std::endl;

    std::cin >> so;
    switch (so)
    {
    case 1:
        std::cout << "DT hinh Vuong" <<std::endl;
        dthinhvuong();
        break;
    case 2:
        std::cout << "DT hinh chu nhat" <<std::endl;
        dthinhchunhat();
        break;
     case 3:
        std::cout << "DT hinh tam giac" <<std::endl;
        dttamgiac();
        break; 
    case 4:
        std::cout << "DT hinh Vuong" <<std::endl;
        dthinhtron();
        break;  
    default:
        break;
    }
    
}

void dthinhtron(){
    float r;
    std::cout << "nhap vao ban kinh r = ";
    std::cin >> r;

    std::cout << "Dien tich hinh tron: " << float(pi*r*r);

}

void dthinhchunhat(){
    int a, b;
    std::cout << "nhap vao 2 canh a va b = ";
    std::cin >> a >> b;

    std::cout << "Dien tich hinh chu nhat: " << a*b;

}

void dthinhvuong(){
    int c;
    std::cout << "nhap vao canh c = ";
    std::cin >> c;

    std::cout << "Dien tich hinh vuong: "<< c*c;

}

void dttamgiac(){
    int a,h;
    std::cout << "Nhap vao 2 canh cua tam giac = ";
    std::cin >> a >> h;

    std::cout << "Dien tich hinh tam giac" << float(0.5*a*h);

}