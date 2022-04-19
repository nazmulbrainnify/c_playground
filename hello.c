#include <stdio.h>

int main()
{
    // Integer Value
    int a=20, b=40, sum;
    sum = a+b;
    printf("%d + %d = %d \n", a, b, sum);

    // Double / Float Value inside integer
    int x = 2.34, y=4, z;
    z = x + y;
    printf("%d + %d = %d \n",x, y, z); //Output will be 2 + 4 = 6;


    // Double / Float Value
    double d = 2.34, f;
    int e=4;
    f = d + e;
    printf("%lf + %d = %lf \n",d, e, f);


    // Get value from user
    int m, n, o;
    //scanf("%d", &m);
    //scanf("%d", &n);

    //Multiple Togather
    scanf("%d %d", &m, &n);

    o = m + n;
    printf("Calculation is : %d" , o);

    return 0;
}
