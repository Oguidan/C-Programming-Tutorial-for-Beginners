#include <stdio.h>
#include <stdlib.h>
void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}

int main()
{
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);
    
    return 0;
}