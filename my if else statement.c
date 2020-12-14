#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("please enter your age\n");
    scanf("%d",&age);

    if(age>18)
    {
        printf("the age is greater than 18");
    }
    else
    {
    printf("the age is not greater than 18");
    }
    else if(age==18)
    {
        printf("age is equal to 18");
    }

}
