#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    int *px;
    int n;

    cin >> n;
    px = new int[n];
    for (int i=0;i<n;i++)
        cin >> *(px+i);
    
    int max = *px;
    for(int i=1;i<n;i++)
        if(*(px+i)> max)
            max =*(px+i);
    cout << max;

    return 0;

}