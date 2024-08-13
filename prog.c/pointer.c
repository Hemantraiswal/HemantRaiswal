#include<stdio.h>

//---------->>>>>> Pointers
// --> A variable that stores the memory address of another varible .

int main(){
    int year = 2024;
    int *sun = &year;
    int _year = *sun;

    printf("%p\n",sun); // %p is use for print address of variable.
    printf("%u\n",sun); // %u is use for print address of variable in number ( like 95642813).
    printf("%p\n",year);
    printf("%p\n",year);
    printf("%p\n",_year);
    printf("%p\n",_year);

    return 0;
}