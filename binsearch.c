#include <stdio.h>
#define LEN 10

int binsearch(int, int[], int) ;

void main() {
    int pos = 0 ;
    int target[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;

    pos = binsearch(1, target, LEN) ;

    printf("search position %d\n", pos) ;

}

int binsearch(int x, int target[], int n) {
    int low=0, high=n ;

    while (low <= high) {
        int mid = (low + high) / 2 ;

        if (x < target[mid]) {
            high = mid ;
        } else if (x > target[mid]) {
            low = mid + 1;
        } else {
            return mid ;
        }
    }

    return -1 ;
}