#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char s[255];
    int i,b;
    cout << "Nhap vao xau bat ky: \n";
    cin.getline(s,255);
    //int l = strlen(s);
    for(i=0,b=1; i<strlen(s)/2; i++)
    if(s[i]!= s[strlen(s)-i-1]){
            b=0;
            break;
        }
    (!b)?cout << "chuoi khong doi xung ":cout <<"chuoi doi xung";

    return 0; 


} 
