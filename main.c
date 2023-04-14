#include <stdio.h>
#define N 10

int main() {
    int x=1;
    for (int i = 1; i < N+1; ++i) {
        printf("%i\t",x*i);
        x++;
    }
    return 0;
}
