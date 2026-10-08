#include <studio.h>
#include <stdblish.h>

int sumTwo(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int get_max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        retutn y;
    }
}

int main (int argc, char *argv[]) {
    int res1 = sumTwo(10, 20);
    int res2 = square(5);
    int res3 = get_max(15, 30);

    printf("sumTwo(10, 20) = %d\n", res1);
    printf("square(5) = %d\n", res2);
    printf("get_max(15, 20) = %d\n", res3);

    return 0;
}
