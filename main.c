#include <stdio.h>

int main(void) {
  int N;
  scanf("%d",&N);
  int sum =0;
  int si[100], sj[100];
  int i,j;
  
  for(i=0;i<100;i++){
    for(j=0;j<100;j++){
     sum = 5*i+3*j;
     if(sum==N) break;
    }
  }
  
  
  printf("%d %d %d",sum,i,j);
}