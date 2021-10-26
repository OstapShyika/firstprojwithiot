#include <stdio.h>
#include <math.h>
void main(void)
{
    float output;
    float  h,a,b;
    printf("input h: ");
    scanf("%f", &h);
    printf("input a: ");
    scanf("%f", &a);
    printf("input b: ");
    scanf("%f", &b);
    for(float x=a; x<=b; x++)
    {
        while(x<7)
            {
                output=log(x*log(x)+sin(x));
                printf("argument: x: %f; function: %f \n", x, output);
                x = x+h;
            }
        while(x>=7 && x<8)
            {
                output=(log(sin(x)+4))/log(3);
                printf("argument: x: %f; function: %f \n", x, output);
                x = x+h;
            }
        while(x>=8)
            {
                output=1/(16+pow(cos(x),-1));
                printf("argument: x: %f; function: %f \n", x, output);
                x = x+h;
                if(x>=b)
                break;
            }
    }
}