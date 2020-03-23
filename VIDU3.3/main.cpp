#include <iostream>

int main(){
    int a,b;
    std::cin >> a >> b;

    int r = a%b;

    while (r!=0){
        a = b;
        b = r;
        r =a%b;
    }

    std::cout << "uoc so chung lon nhat la: " << b;

    return 0;
    
}