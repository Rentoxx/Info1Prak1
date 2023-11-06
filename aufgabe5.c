#include <stdio.h>
int differenz(int a, int b) {
    return a-b;
}

int betrag(int a) {
    if(a < 0) {
        a = a*(-1);
        return a;
    }else{
        return a;
    }
}


int main() {
    printf("|a\t|b\t|Differenz\t|Abstand\n---------------------------------------\n");
    for(int i = 0; i <= 20; i=i+1) {
        int a = i;
        int b = 20 - i;
        int diff = differenz(a,b);
        int btr = betrag(diff);
        printf("|%d\t|%d\t|a - b = %d\t|%d\n", a, b, diff, btr);
    }
    return 0;
}