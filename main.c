#include <studio.h>

int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void) {
    int n, r, result;

    printf("Enter n: ");
    n = get_integer();
    printf("Enter r: ");
    r = get_integer();

    result = combination(n, r);
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}

int get_integer(void) {
    int input;
    scanf("%d", &input);
    return input;
}

int factorial(int n) {
    int res = 1;
    int i;
    for(i = 1; i<= n; i++) {
        res = res * i;
    }
    return res;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}
