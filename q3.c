#include <stdio.h>

char number_type(float num);

int main()
{
    float num;

    printf("Please enter a number: ");
    scanf("%f", &num);

    if (number_type(num) == 'I')
        printf("Integer\n");
    else
        printf("Float\n");

    return 0;
}

char number_type(float num)
{
    if (num == (int)num)
    {
        return 'I';
    }
    else
    {
        return 'F';
    }
}
