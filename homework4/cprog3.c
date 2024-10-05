#include<stdio.h>
int main()
   {
     int a, b;
     printf("Birinci ededi daxil:");
     scanf("%d",&a);
     printf("Ikinci ededi daxil edin:");
     scanf("%d",&b);
     if (a>b){
        printf("En boyuk eded:%d\n",a);

     }else {
        if(a==b){
          printf("Ededler bir- birine beraberdir:%d\n");
        }else{
          printf("En boyuk eded:%d\n",b);
        }







       }
       return 0;

     }







