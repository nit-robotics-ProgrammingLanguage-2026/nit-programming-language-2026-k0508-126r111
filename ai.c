
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n <= 0)
        return printf("%s", n < 0 ? "Error" : "No"), 0;

    const char *s[] = {"Up", "Go", "!!"};
    unsigned mask = (n%3==0) | ((n%5==0)<<1) | ((n%7==0)<<2);

    if (!mask) printf("No");
    for (int i=0; i<3; i++)
        if (mask & (1u<<i)) printf("%s", s[i]);

    return 0;
}
