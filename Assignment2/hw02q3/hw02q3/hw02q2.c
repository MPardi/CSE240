
#include <stdio.h>

#define subm(a,b) (a-b)
#define cubem(a) (a*a*a)
#define minm(a,b) ((a<=b) ? a : b)
#define oddm(a) ((a%2==0) ? 0 : 1)

int subf(int a, int b) {
    return a - b;
}

int cubef(int a) {
    return a * a * a;
}

int minf(int a, int b) {
    if (a <= b) {
        return a;
    }
    else {
        return b;
    }
}

int oddf(int a) {
    if (a % 2 == 0) {
        return 0;
    }
    else {
        return 1;
    }
}


int main() {
    int a = 5, b = 7;
    printf("a = %d \tb = %d\n", a, b);
    printf("subf(a, b) = %d\n", subf(a,b));
    printf("subm(a, b) = %d\n", subm(a,b));
    printf("subf(a++, b--) = %d\n", subf(a++, b--));
    printf("subm(a++, b--) = %d\n", subm(a++, b--));
    printf("cubef(a) = %d\n", cubef(a));
    printf("cubem(a) = %d\n", cubem(a));
    printf("cubef(--a) = %d\n", cubef(--a));
    printf("cubem(--a) = %d\n", cubem(--a));
    printf("minf(a, b) = %d\n", minf(a,b));
    printf("minm(a, b) = %d\n", minm(a,b));
    printf("minf(--a, --b) = %d\n", minf(--a, --b));
    printf("minm(--a, --b) = %d\n", minm(--a,--b));
    printf("oddf(a) = %d\n", oddf(a));
    printf("oddm(a) = %d\n", oddm(a));
    printf("oddf(a++) = %d\n", oddf(a++));
    printf("oddm(a++) = %d\n", oddm(a++));
}
