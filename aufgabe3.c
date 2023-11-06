#include <stdio.h>
int differenz(int a, int b) {
    return a-b;
}

int absolut(int a) {
    if(a < 0) {
        a = a*(-1);
        return a;
    }else{
        return a;
    }
}

int main() {
    int a = 5;
    int b = 8;
    int c = differenz(a,b);
    int d = absolut(c);

    printf("Die Differenz von %d und %d ist %d. Der Abstand ist %d\n", a, b, c, d);
    return 0;
}