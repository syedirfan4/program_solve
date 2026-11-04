//read n number of values in an array and display them in reverse order. 
#include<stdio.h>
int main(){
  int n;
  printf("Enter n: ");
  scanf("%d",&n);
  int a[n];

  for(int i=0; i<n; i++){
    printf("element %d: ",i);
    scanf("%d",&a[i]);
  }
  
  printf("reverse: \n");
  for(int i=n-1; i>=0; i--){
    printf("%d\n",a[i]);
  }
  
}
