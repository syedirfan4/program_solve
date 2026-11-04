//find the sum of all elements of an array

#include<stdio.h>
int main(){
  int n;
  printf("enter n: ");
  scanf("%d",&n);
  int a[n];
  int sum = 0;


  for(int i=0; i<n; i++){
    printf("element %d: \n",i);
    scanf("%d",&a[i]);
    sum = sum + a[i];
  }
  printf("sum: %d",sum);
}
