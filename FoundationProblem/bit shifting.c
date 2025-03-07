#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b = a << 3;
    int c = b >> 3;
    printf("b = %d\nc = %d\n", b,c);
    return 0;
}
