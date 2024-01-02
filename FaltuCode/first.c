#include <stdio.h> // this is a pre  processor directive
#include <math.h>


void main()
{
printf("Hello world\n");

// variable declararion in c
// C variables are case sensitive

int number = 20;
char star = '*';
int age = 15;
float pi = 3.14;
int final_price = 100;

// C data types

/*int age = 22;
float pi = 3.14;
char hashtag = '#';
*/

// constants
 // 3 types of constants - integer (1,2,3,4,5), real(2.0,3.0), character(a,A,c,r)
 // characters constants are used with single quotes('a')

// keywords
 // reserved words that have special meaning in the compiler
 // 32 keywords in C

// comments
  // single line
 /* multi
    line
    comments */


//using variables in outputs
 // integers
printf("age is %d\n",age);    
 // real numbers
printf("value of pi is %.2f\n",pi);
 // cahraters
printf("star looks like %c\n",star);


// Inputs

// scanf("%d", &age);

printf("Enter age: ");
//scanf("%d",&age);
printf("Age is %d \n",age);

// Compiler - A computer program that translates C code into machine code
// compilation is a 2 step process


//                  Instructions
// 3 types of instructions- type declarartion, arithmetic, control

// pow(x,y) is x to the power y

int power = pow(3,2);  
printf("%d\n",power);

printf("%d\n",3%2);
printf("%d\n",-3%2);
// in modulus second operand can't be negative
 
// modulus operator
// Type conversion
int num = (int) 1.99999;
printf("%d\n",num);

// operator precedence
// ()
// !
// *,/,%
// +,-
// <,<=,>,>=
// ==,!=
// &&
// ||
// =

num = 4 + 9 * 10;
printf("%d\n",num);
// Associativity (for same precedence) = left to right
num = 4 * 3 / 6 * 2 ;
printf("%d\n",num);

// Control Instrutions
// these are used to alter the flow of code
// 4 types
// sequence control, decision control(if,else), loop control(loops), case control(switch cases)

/*    Operators
a, Arithmetic
b. relational
c. logical
d. Bitwise
e. Assignment
f, ternary  */ 

// Relational(== , <,>.<=.>=,!=)
printf("%d\n", 4 == 4);
// C has no true or false
// true = any non zero integer
//false = 0

// Logical(&& AND, || OR, ! NOT)

printf("%d\n", (41<5) && (3>=3));
printf("%d\n", (41<5) || (3>=3));
printf("%d\n",!(3 == 3));

// assignment operator
// =, +=, -=, *= ,/= ,%=


int a = 5;
int b = 5;
a+=b;
b*=a;
printf("%d %d\n", a,b );

// Conditional statements
//printf("Enter age: ");
//scanf("%d",&age);
if (age>18){
  printf("Adult \n");
}


else{
  printf("Not audult \n");
}


int marks;
printf("Enter Marks: ");
//scanf("%d",&marks);
if (marks >= 90){
  printf("A\n");
}
else if (marks >= 80){
  printf("B\n");
}
else{
  printf("Fail\n");
}

// Ternary operator
// condition? dosomething iftrue:do something ifFalse;
age = 100;
(age > 18) ? printf("Adult\n") : printf("Not adult\n");

// Switch 
/*
switch(numbers)
{
  case c1: task
           break;
  case c2: tasl
            break;
  default: task
}
*/

// Loop control instructions

// 3 types for , while , do while

// for(initialisation;condition;updation){<code>}
// if you don't give stop condition , the loop will go infinite
// int i = 1;

for(int i = 1; i<=100;i++){
  printf("%d \n",i);
}
for (int i = 99; i>=1;i=i-1){
  printf("%d \n",i);
}
//increment operator
// ++i (pre increment operator)= increase, then use
// i++ (post increment operator) = use, then increase
//same with decrement operator
int i = 5;
printf("%d \n",--i);
printf("%d \n",i);
//loop counter can br float or character
for (float i = 0; i < 5.0; i++)
{
 printf("%f \n",i);
}

for (char ch = 'a'; ch <='z'; ch++ ){
  printf("%c \n",ch);
}

// while loop
//while(condition){<code>}

int ii=1;
while(ii<=5){
  printf("%d \n",ii);
  ii++;
}
// do while loop
//do {code} while(condition);

int n = 1;
do {printf("%d \n",n); n++;} while (n<= 10);







}