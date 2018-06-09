#include <stdio.h>

int nhap(){
  int n;
  printf("Nhap vao so phan tu trong mang: ");
  scanf("%i",&n);
  while(n<5){
    printf("So ban vua nhap khong thoa man dieu kien, moi nhap lai: ");
    scanf("%i",&n);
  }
  return n;
}

void nhapMang(int a[],int n){
  int i;
  for(i=0;i<n;i++){
    printf("Nhap vao so thu %i: ",i+1);
    scanf("%i",&a[i]);
  }
}

void leDuong(int a[],int n){
  int i;
  int dem=0;
  printf("\nVi tri cac so le la: ");
  for(i=0;i<n;i++){
    if(a[i]%2!=0 && a[i]>0){
      dem++;
      printf("%i, ",i+1);
    }
  }
  printf("\nMang vua nhap co %i phan tu duong le. \n",dem);
}

void tongBinhPhuong(int a[],int n){
  int i;
  int tong=0;
  for(i=0;i<n;i++){
    if(a[i]%2!=0 && a[i]%3==0){
      tong+=(a[i]*a[i]);
    }
  }
  printf("Tong binh phuong cac so le trong mang chia het cho 3 la: %i \n",tong);
}

void xoaMang(int a[], int *p_n){
  int n=*p_n;
  n--;
  int i;
  int k=0;
  for(i=n;i>0;i--){
    if(a[i]>0){
        a[i]=a[i+1];
        break;
    }
  }
  *p_n=n;
}

void xuatMang(int a[],int n){
  int i;
  printf("Mang sau khi xoa la: ");
  for(i=0;i<n;i++){
    printf("%i, ",a[i]);
  }
}

int main(){
  int a[1000];
  int n=nhap();
  nhapMang(a,n);
  leDuong(a,n);
  tongBinhPhuong(a,n);
  xoaMang(a,&n);
  xuatMang(a,n);
  printf("\n");
  return 0;
}
