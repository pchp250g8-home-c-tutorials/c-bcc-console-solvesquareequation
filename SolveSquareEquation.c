#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    float a, b, c;
    system("cls");
    printf("Input coefficients of square equation\r\n");
    scanf("%f%f%f", &a, &b, &c);
    printf
    (
    	"Try to solve the equation: %f * x ^ 2 + %f * x + %f = 0\r\n",
        a, b, c
    );
    if ((a == 0) && (b == 0) && (c == 0))
    {
        printf("The answer is any number\r\n");
    }
    else if ((a == 0) && (b == 0) && (c != 0))
    {
        printf("The equation has no solution\r\n");
    }
    else if ((a == 0) && (b != 0) && (c != 0))
    {
        printf("The equation has the following solution : x = %f\r\n",-c / b);
    }
    else
    {
        float d = b * b - 4 * a * c;
        int sign = (d > 0) - (d < 0);
        int nRoots = sign + 1;
        if (nRoots > 0)
        {
            float x1 = (-b - sqrt(d)) / (2 * a);
            float x2 = (-b + sqrt(d)) / (2 * a);
            printf("The equation has the following roots : \r\n");
            printf("x1 = %f\r\n", x1);
            printf("x2 = %f\r\n", x2);
        }
        else
            printf("The equation has no roots\r\n");
    }
    getchar();
    getc(stdin);
    return 0;
}
