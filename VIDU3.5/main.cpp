#include <iostream>
#include <stdio.h>

int main(){
    char kytu;
    
    std::cout << "\n Chuong trinh lay gia tri ascii cua ky tu nhap tu ban phim." <<std::endl;
    std::cout << " \n Nhan phim ESC de thoat chuong trinh" << std::endl;
    std::cout << "-----------------------------------------------"<<std::endl;
    
    do {
        std::cout << "Nhap ky tu: ";
        std::cin >> kytu;
        if (int(kytu)!= 27){
            std::cout << "Ma ASCII cua ky tu " << kytu << " la "<< int(kytu)<<std::endl;

        }else {
            break;
        }


    }
    while (kytu !=27);
    
    
    return 0;
}