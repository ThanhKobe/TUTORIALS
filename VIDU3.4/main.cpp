#include <iostream>
#include <stdlib.h>

int main(){
    char pt;
    int a,b;

    while(1){
        std::cout << "Nhap vao so a =: ";
        std::cin >> a;
        std::cout << "Nhap vao so b = ";
        std::cin >> b;

        std::cout << "\n Go + neu thuc hien phep cong";
        std::cout << "\n Go - neu thuc hien phep tru";
        std::cout << "\n Go * neu thuc hien phep nhan";
        std::cout << "\n Go / neu thuc hien phep chia";

        std::cout <<"\n Chon phep toan";

        std::cin >> pt;

        switch (pt)
        {
        case '+':
            std::cout << "ket qua la:" << a+b;
            break;
        case '-':
            std::cout << "ket qua la:" << a-b;
            break;
        case '*':
            std::cout << "ket qua la:" << a*b;
            break;
        case '/':
            std::cout << "ket qua la:" << a/b;
            break;
        
        default:
            exit(1);
        }
        return 0;

    }
}