#include <stdio.h>
#include <math.h>

int nhap1(char c){
  int n;
  printf("Nhap vao so n%c: ",c);
  scanf("%i",&n);
  return n;
}

int nhap2(char c){
  int x;
  printf("Nhap vao so x%c: ",c);
  scanf("%i",&x);
  return x;
}

float tinh(int n,int x){
  int i;
  float dem=0;
  float kq=0;
  if(n<10 && x!=0){
    for(i=1;i<=n;i++){
      dem+=(i/pow(x,i));
    }
    kq=dem+2019;
  }
  else {
    for(i=1;i<=n;i++){
      kq+=((float)i/(i+1));
    }
  }
  return kq;
}

int main(){
  float tong=0;
  int n1=nhap1('1');
  int x1=nhap2('1');
  int n2=nhap1('2');
  int x2=nhap2('2');
  tinh(n1,x1);
  tinh(n2,x2);
  tong=tinh(n1,x1)+tinh(n2,x2);
  printf("Ket qua S = %f \n",tong);
  return 0;
}
