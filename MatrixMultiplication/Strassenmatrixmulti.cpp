#include<stdio.h>
int main(){
   int z[2][2];
   int i, j;
   int m1, m2, m3, m4 , m5, m6, m7;
   int x[2][2] = {
       {1, 1}, 
       {1, 1}
       };
   int y[2][2] = {
       {1, 1}, 
       {1, 1}
   };
   printf("The first matrix is: ");
   for(i = 0; i < 2; i++) {
      printf("\n");
      for(j = 0; j < 2; j++)
         printf("%d\t", x[i][j]);
   }
   printf("\nThe second matrix is: ");
   for(i = 0; i < 2; i++) {
      printf("\n");
      for(j = 0; j < 2; j++)
         printf("%d\t", y[i][j]);
   }
   m1= (x[0][0] + x[1][1]) * (y[0][0] + y[1][1]);
   m2= (x[1][0] + x[1][1]) * y[0][0];
   m3= x[0][0] * (y[0][1] - y[1][1]);
   m4= x[1][1] * (y[1][0] - y[0][0]);
   m5= (x[0][0] + x[0][1]) * y[1][1];
   m6= (x[1][0] - x[0][0]) * (y[0][0]+y[0][1]);
   m7= (x[0][1] - x[1][1]) * (y[1][0]+y[1][1]);
   z[0][0] = m1 + m4- m5 + m7;
   z[0][1] = m3 + m5;
   z[1][0] = m2 + m4;
   z[1][1] = m1 - m2 + m3 + m6;
   printf("\nProduct achieved using Strassen's algorithm: ");
   for(i = 0; i < 2 ; i++) {
      printf("\n");
      for(j = 0; j < 2; j++)
         printf("%d\t", z[i][j]);
   }
   return 0;
}
