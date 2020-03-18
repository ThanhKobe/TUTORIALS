//coder : ThanhKobe
//so sanh 3 so a,b,c
#include<iostream>

int main(){

 float a,b,c, max;
 std::cout << "Nhap vao 3 so: ";
 std::cin >> a >> b >> c;
 max = a;
 if (b>max) max=b;
 if (c>max) max=c;
 std::cout << "Gia tri lon hon nhat la: " << max << std::endl;
 return 0;
  
}