#include <stdio.h>

// // void helloworld(int count);

// // int main(){
// //     helloworld(7);
// //     return 0;
// // }

// // void helloworld(int count){
// //     if (count == 0){
// //         return ;
// //     }
// //     printf("helloworld\n");

// //     helloworld(count - 1);

// // }

// // ---> write sum of N numbers by recursion

// // int sum(int n);

// // int main(){
// //     printf("sum is :%d",sum(7));
// //     return 0;

// // }

// // int sum(int n){
// //     if(n == 1){
// //         return 1;
// //     }
// //     int sumNm1 = sum(n-1);
// //     int sumN = sumNm1 + n;
// //     return sumN;
// // }

// // -->> Factorial of n numbers

// // int fact(int n);

// // int main(){
// //     int fac;
// //     printf("enter number :");
// //     scanf("%d",&fac);
// //     printf("factorial is :%d",fact(fac));
// //     return 0;
// // }

// // int fact (int n){
// //     if (n == 1){
// //         return 1;
// //     }
// //    int minus = fact(n-1);
// //    int facto = minus*n;
// //    return facto;

// // }

// // convert celsius to fahrenheit

// // int temp(int celsius);

// // int main (){
// //     int far = temp(0);
// //     printf("temp in F :%d",far);
// //     return 0;
// // }

// // int temp(int celsius){

// //     int fahrenheit =  celsius * (9/5) + 32;
// //     return fahrenheit;

// // }

// float temp(float celsius);

// int main()
// {
//     float cel;
//     printf("enter cel :");
//     scanf("%f",&cel);
//     printf("temp in F :%f", temp(cel));
//     return 0;
// }

// float temp(float celsius)
// {
//     if(celsius == 0){
//         return 32;
//     }

//     float fahrenheit = celsius * (9.0 / 5.0) + 32;
//     return fahrenheit;
// }

// --. 

// int percentage(int hindi, int english, int math);

// int main(){
//     int hindi;
//     printf("enter hindi marks :");
//     scanf("%d",&hindi);
//     int english;
//     printf("enter english marks :");
//     scanf("%d",&english);
//     int math;
//     printf("enter math marks :");
//     scanf("%d",&math);

//     printf("percentage is :%d",percentage(hindi,english,math));
//     return 0;
// }

// int percentage(int hindi, int english, int math){
//     return ((hindi + english + math) / 3);
// }

//--->>> print N terms of fabonacci sequence or number

    int fib(int n);

    int main(){
        printf("fibonacci n is :%d",fib(6));
        return 0;
    }

    int fib(int n){
       if (n==0){
        return 0;
       }
       if (n==1){
        return 1;
        }
        int fabo = fib(n - 1);
        int fibo = fib(n - 2) ;
        int fibon = fabo + fibo ;
        return fibon ;
    }



