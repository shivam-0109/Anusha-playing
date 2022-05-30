#include <stdio.h>
int main()
{ 
  int num1,num2,c,d;
  scanf("%d %d",&num1,&num2);
  if(num1<num2){
      printf("1");
  }else if(num1%num2==0){
      c=num1/num2;
      printf("%d",c);
  }else{
      d=(num1/num2)+1;
      printf("%d",d);
  }
  return 0;
}
