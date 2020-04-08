#include<iostream>
#include<iomanip>
#include<stdio.h>

void nhap(int a[][50], int &n, int &m){
    printf("Nhap so dong: ");
    scanf("%d",&n);
    
    printf("Nhap so cot: ");
    scanf("%d",&m);

    for(int i=0; i<n; i++)
        for (int j=0; j<m; j++){
            printf("phan tu thu a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);

        }

}
void xuat(int a[][50], int n, int m){
    for (int i=0; i<n;i++){
        for (int j=0; j<m;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
int solanxuathien(int a[][50],int n, int m, int x){
    int dem =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x)
                dem=dem+1;
        }
    }
    return dem;

}
int main(){ 
  int a[50][50],n,m,x;
  nhap(a,n,m);
  xuat(a,n,m);
  printf("vui long nhap :");
  scanf("%d", &x);
  printf("so lan xuat hien cua x la: %d",solanxuathien(a,n,m,x));

  return 0;
}
