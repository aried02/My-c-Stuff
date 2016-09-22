#include <stdio.h>
#include <stdlib.h>
#include "myfunctions.h"

int main(int argc, char* argv[])
{
    sayHello();
    int humanAge;
    scanf("%d", &humanAge);
    printf("Your age in dog years is %d", ageInDogYears(humanAge));
    return 0;
}
void sayHello()
{
    printf("Whats goin on World\n");
}

int ageInDogYears(int hooman)
{
    return hooman*7;
}


