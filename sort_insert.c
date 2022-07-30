#include <stdio.h>
#define SIZE 8

int main() {
    int origin[SIZE] = {16, 25, 39, 27, 12, 8, 45, 63};
    int tmp = 0;
    int min=0;

    // dump(origin, SIZE);
    for (int y=1;y<SIZE;y++) {
        for (int x=0;x<y;x++) {
            if (origin[y] < origin[x]) {
                tmp = origin[x];
                origin[x] = origin[y];
                origin[y] = tmp;
            }
        }
        dump(origin, SIZE);
    }

    return 0;
}

void dump(int ary[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
}