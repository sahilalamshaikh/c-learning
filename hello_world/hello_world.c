/*Sahil Alam Shaikh Nov 1 */
#include <stdio.h>

int main() {
    puts("I am a computer!");
    puts("Thrilled to meet you.");
    puts("This is way the world end.");
    puts("Not with a bang what whimpher.");

//escape squence
   printf("Hello!\nMy name is \"Sahil Alam Shaikh\"\n");
// Diference B/w string and integer 
printf("Here the value : %d \n",27);
printf("Everyones know that %d+%d=%d\n",2,2,4);
// Computer Perform Maths
printf("Everyones know that %d+%d=%d\n",2,2,2+2);
// string
printf("Everyones know that %s\n","programmer");
// introduction to variable
/*int =Integer or whole number*/
/*float= Floating Points*/
/*double= Very large floating Point*/
/*char=S Single Chracter*/
/*experiment with variable*/
// Integer (int)
int age;
age=30;
  printf("C language is %d times old! \n",age);
  // character (char)
  char x,y,z;
  x='A';
  y='B';
  z='C';
  printf("It is easy as %c%c%c \n",x,y,z);
  // Float (float)
  float pi;
  pi=22.0/7.0;
  printf("The acients calculated PI as %f \n",pi);
  // Intput I/O and Outpout functions
  int c;
  printf("type a letter '");
  c=getchar();
  printf("you typed a letter is %c",c);
  int a,b;
  printf("\ntwo type of chr : %c ");
  a=getchar();
  b=getchar();
  putchar(a);
  printf("'and '");
  putchar(b);
  printf("'.\n");

      return(0);
}