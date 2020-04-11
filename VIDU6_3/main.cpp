#include <iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>

using namespace std;
void lower(char s[]){
    for (int i=0; s[i]!='\0';i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i]+32;

        }
    }

}
void upper(char s[]){
    for(int i=0; s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i] = s[i]-32;

        }
    }
}
void title(char str[]){
    for(int i=0; str[i]!='\0';i++){
        if (str[i]>='A'&& str[i]<='Z') 
            str[i] += 32;
        if (str[i-1]==' '|| i==0){
            if (str[i]>='a' && str[i]<='z')
                str[i] = str[i]-32;
        }
    }
}
int main(){
    char s[100];
    //int i;

    cout << "Nhap chuoi can nhap: ";
    cin.getline(s,100);
    lower(s);
    cout << "Chuoi ky tu viet thuong " << s << endl ;
    upper(s);
    cout << "Chuoi ky tu viet hoa " << s << endl;
    title(s);
    cout << "Chuoi ky tu viet hoa dau cau " << s << endl;

    return 0;
}