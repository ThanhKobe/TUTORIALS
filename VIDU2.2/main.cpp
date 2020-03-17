//viet chuong trinh 
//giai phuong trinh dang ax+b=0
// Coder: ThanhKobe
#include<iostream>
//#include<curses.h>

//using namespace std;

//void clrscr(){
  //  system("clear");
//}

int main(){
    //clrscr();
    float a,b;
    
    std::cout << "Nhap vao 2 gia tri: ";
    std::cin >> a >> b;
    
    if(a!=0)
    std::cout << "Phuong trinh co nghiem";

    if(a==0&&b!=0)
    std::cout << "Phuong trinh vo nghiem";

    return 0;
    //getch();

}