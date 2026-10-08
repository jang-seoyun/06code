#include <studio.h>

void square_void(int a){
    a = a * a;
}

int square_int(int a) {
    return (a * a);
}

int main(void) {
    int a1 = 2;
    square_void(a1);
    printf("a = %d\n", a1);

    int a2 = 2;
    a2 = square_int(a2);
    printf("a = %d\n", a2);

    return 0;
}
