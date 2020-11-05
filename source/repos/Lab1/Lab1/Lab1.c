#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    float a, absmax;
    int i = 0;
       
        printf("Input ten numbers:\n");
        absmax = 0;
        float maxabs = 0;
        float abs = 0;
        int boo = 0;
        while (i < 10)
        {
            scanf("%f", &a);
            if (boo == 0) {
                absmax = a;
                boo = 1;
            }
            abs = a >= 0 ? a : a * (-1);
            if (abs >= absmax) {
                maxabs = a;
                absmax = abs;
            }
            i++;
        }
        printf("%f", maxabs);
    return 0;
}