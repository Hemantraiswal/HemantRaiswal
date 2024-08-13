#include <stdio.h>
int main()
{
    // float a = 1.999999;
    // printf("%f",a);
    // return 0;

    // ----->>>>>>>arithmetic operators or instruction

    // ------> Associativity for same precedence(it solve from left to right)

    //  printf("%d",4*5/2*4);
    //  return 0;

    // int a = 5*2-2*3;
    // printf("%d\n",a);
    // return 0;

    // int _a = 5*2/2*3;
    // printf("%d\n",_a);
    // return 0;

    // int b = 5*(2/2)*3;
    // printf("%d\n",b);
    // return 0;

    // int _b = 5+2/2*3;
    // printf("%d\n",_b);
    // return 0;

    // ------>>>>>>>>control instruction (use for control the flow of program)
    // -->>1.sequence > 2.decision control > 3.loop control > 4.case control

    // ----->>>>>relational operators
    // ==,
    // >,>=
    // <,<=
    // !=

    //   printf("%d\n",4 == 4 );
    //   return 0;

    //   printf("%d\n",4>3);
    //   return 0;

    //   printf("%d\n",4>=3);
    //   return 0;

    //   printf("%d\n",4<3);
    //   return 0;

    //   printf("%d\n",4<=3);
    //   return 0;

    //   printf("%d\n",4!=3);
    //   return 0;

    // ----->>>>>>logical operators
    // &&
    // ||(OR)
    // !(NOT)

    // printf("%d",3>2 && 4<5);
    // return 0;

    // printf("%d", 3 > 2 && 4 > 5);
    // return 0;

    //  printf("%d\n", 3 < 2 || 4 > 5);
    // return 0;

    //  printf("%d\n", 3 > 2 || 4 < 5);
    // return 0;

    //  printf("%d\n", !(3 > 2 && 4 < 5));
    // return 0;

    //  printf("%d\n", !(3 < 2 || 4 > 5));
    // return 0;

    // int x;
    // printf("enter number :");

    // scanf("%d",&x);
    // printf("div is : %d",x%2 == 0);
    // return 0;

    // int x;
    // printf("enter the number :");
    // scanf("%d",&x);
    // printf("number is : %d\n" , x > 9 && x < 100);
    // return 0;

    // int x;
    // printf("enter number1 :");
    // scanf("%d\n",&x);
    // int y;
    // printf("enter number2 :");
    // scanf("%d\n",&y);
    // int z;
    // printf("enter number3 :");
    // scanf("%d\n",&z);
    // printf("average is : %d\n",(x+y+z)/3);
    // return 0;

    //--------->if else condition statement

    // int age ;
    // printf("enter the age :");
    // scanf("%d",&age);

    // if(age > 18){
    //     printf("watch animal movie");
    // }
    // else {
    //     printf("watch doraemon movie");
    // }
    // return 0;

    // int marks;
    // printf("enter your marks : ");
    // scanf("%d",&marks);

    // if (marks > 90){
    //     printf("exelent");
    // }
    // else if(marks >80 && marks < 90){
    //     printf("very good");
    // }
    // else if (marks > 70 && marks < 80){
    //     printf("good");
    // }
    // else{
    //     printf("better luck next time");
    // }
    // return 0;

    //--------> Ternary operator

    // int marks;
    // printf("enter your marks : ");
    // scanf("%d",&marks);

    // marks > 90 && marks < 100 ? printf("exelent"):printf("");
    // marks > 80 && marks < 90 ? printf("very good"):printf("good");

    //------> switch operator

    // int month;
    // printf("enter number (1-12) :");
    // scanf("%d",&month);

    // switch (month){
    //     case 1:printf("january");
    //     break;
    //     case 2:printf("february");
    //     break;
    //     case 3:printf("march");
    //     break;
    //     case 4:printf("april");
    //     break;
    //     case 5:printf("may");
    //     break;
    //     case 6:printf("june");
    //     break;
    //     case 7:printf("july");
    //     break;
    //     case 8:printf("august");
    //     break;
    //     case 9:printf("september");
    //     break;
    //     case 10:printf("october");
    //     break;
    //     case 11:printf("nevember");
    //     break;
    //     case 12:printf("december");
    //     break;
    //     default : printf("not a valid month");
    // }

    // char month;
    // printf("enter charecter (a - l) :");
    // scanf("%c",&month);

    // switch (month){
    //     case 'a':printf("january");
    //     break;
    //     case 'b':printf("february");
    //     break;
    //     case 'c':printf("march");
    //     break;
    //     case 'd':printf("april");
    //     break;
    //     case 'f':printf("may");
    //     break;
    //     case 'g':printf("june");
    //     break;
    //     case 'h':printf("july");
    //     break;
    //     case 'i':printf("august");
    //     break;
    //     case 'j':printf("september");
    //     break;
    //     case 'k':printf("october");
    //     break;
    //     case 'l':printf("nevember");
    //     break;
    //     case 'm':printf("december");
    //     break;
    //     default : printf("not a valid month");
    // }

    //-----> Nested switch (switch inside switch) are allowed

    // int number;
    // printf("enter the number :");
    // scanf("%d",&number);

    // if (number >= 0){
    //     printf("positive\n");
    //     if (number % 2 == 0){
    //         printf("even\n");
    //     }
    //     else{
    //         printf("odd\n");
    //     }
    // }
    // else{
    //     printf("nagetive\n");
    // }
    // return 0;

    // int marks;
    // printf("enter marks :");
    // scanf("%d",&marks);

    // if (marks > 30 && marks <= 100){
    //     printf("pass\n");
    //     if(marks <= 30){
    //         printf("fail\n");
    //     }
    // }
    // else{
    //     printf("wrong marks\n");
    // }

    // marks >= 30 ? printf("pass\n") : printf("fail\n");

    // int marks ;
    // printf("enter number : ");
    // scanf("%d",&marks);

    // if (marks < 30){
    //     printf("grade C\n");
    //     }
    //     else if (marks >= 30 && marks < 70){
    //         printf("grade B\n");
    //     }
    //     else if (marks >= 70 && marks < 90){
    //         printf("grade A\n");
    //     }
    //     else if (marks >= 90 && marks <= 100){
    //         printf("grade A+\n");
    //     }

    // else{
    //     printf("wrong marks");
    // }
    // return 0;

    // int x = 2;
    // if (x = 1){
    //     printf("x is equal to 1");
    // }
    // else{
    //     printf("x is not equal to 1");
    // }

    // char ch;
    // printf("enter the char :");
    // scanf("%c",&ch);

    // if (ch >= 'A' && ch <= 'Z'){
    //     printf("upper case\n");
    // }
    // else if (ch >= 'a' && ch <= 'z'){
    //     printf("lower case\n");
    // }
    // else {
    //     printf("not a character\n");
    // }

    //----------> Loops instuctions
    // 1.for loop
    // 2.while loop
    // 3.do while loop

    //-----> for loop

    // int i;
    // for(i = 0; i <= 10; i++){
    //     printf("%d    ",i);
    // }

    // char ch;
    // for (ch >= 'a'; ch <= 'z'; ch++){
    //     printf("%c",ch);
    // }

    //---------> increment operator and decrement operator
    // ++i , i++ , --i , i--

    // int i=5;
    // printf("%d\n",i++); //use, then increase
    // printf("%d",i);
    // return 0;

    // printf("%d\n",++i); //increase, then use
    // printf("%d",i);
    // return 0;

    // printf("%d\n",i--); //use, then decrease
    // printf("%d",i);
    // return 0;

    // printf("%d\n",--i); //decrease, then use
    // printf("%d",i);
    // return 0;

    // float and character value in loops

    // for (float i=1.0; i<=5.0; i++){
    //     printf("%f\n",i);
    // }
    // return 0;

    // for (char ch='a'; ch <= 'z'; ch++){
    //     printf("%c ",ch);
    // }

    //-------> infinite loop

    // int n;
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("r2h\n", i);
    // }
    // return 0;

    //----> while loop

    // int i = 1;
    // while (i <= 5)
    // {
    //     printf("ludo\n", i);
    //     i++;
    // }
    // return 0;

    //     int n; // input by user
    //     printf("enter the number : ");
    //     scanf("%d",&n);

    //     int i = 0;
    //     while (i <= n)
    //     {
    //         printf("%d\n",i);
    //         i++;
    // }
    //     return 0;

    //----------> do while loop

    //    int i = 0;
    //    do{
    //     printf("%d\n",i);
    //     i++;
    //    }
    //    while(i<=5);

    // int n;

    // printf("enter the number :");
    // scanf("%d",&n);

    // int i = 0;

    // do{
    //     printf("%d\n",i);
    //     i++;

    // }while(i <= n);
    // return 0;

    //-------> arithmetic(add,sub,mul,div) operator in loops

    // int n;
    // printf("enter number : ");
    // scanf("%d",&n);

    // int sum = 0;
    // for (int i = 0,j = n; i <= n && j>=1; i++,j--){
    //     printf("%d\n",j);
    //     sum += j;
    // }

    // printf("sum is : %d\n",sum);
    // return 0;


    // print table of number 2

    // int n;
    // printf("enter the number :");
    // scanf("%d", &n);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", i * n);
    // }

    // return 0;

    // ------> table in reverse

    // int n;
    // printf("enter the number :");
    // scanf("%d", &n);

    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d\n", i * n);
    // }

    // return 0;

    //---> break and continue operator

    // int i;
    //    for ( i = 0; i <= 5; i++){
    //     if ( i == 2){
    //         break;
    //     }
    //     printf ("%d\n",i);
    //    }

    //    printf("khatam");
    //     return 0;

    //    int i;
    //    for ( i = 0; i <= 5; i++){
    //     if ( i == 2){
    //         continue;
    //     }
    //     printf ("%d\n",i);
    //    }

    //    printf("khatam");
    //     return 0;

    // int i;
    // do
    // {
    //     printf("enter number :");
    //     scanf("%d", &i);
    //     printf("%d\n",i);

    //     if (i % 2 != 0)
    //     {
    //         break;
    //     }

    // int sum = 0;
    // for (int i=5;i<=50;i++){
    //     sum += i;
    // }
    // printf("sum is :%d",sum);
    // return 0;
        

    // } while (1);
    // printf("not divisi;ble by 2\n");

    // return 0;

    // --------->>> factorial of number n

    // int n;
    // printf("enter number :");
    // scanf("%d",&n);

    // int fact = 1;
    // for (int i = 1; i<=n; i++){
    //     fact = fact * i;
    // }
    // printf("fact is :%d",fact);
    // return 0;

    //--------->>>> Function and Recursion

    // function :- block of code that performs a particular task
    // take argument >>> do work >>> return result
    // it can be use multiple times
    // increase code reusability

    // funtions are two types :-
    // 1. library funtion --> like ; printf ,scanf using in <stdio.h> 
    // stdio.h is a library

    // 2. user difined funtion --> define by user 

    // Function can take value and give some value 
    // take value called Parameter.
    // give value called return value.
    //

    // recursion :- when function calls itself is called recursion .


}