#include <stdio.h>
#define SIZE 10

int main() {
    int data[] = {35, 10, 42, 3, 79, 12, 62, 18, 51, 23} ;
    int k, i=0, j=SIZE-1 ;
    int s, e ;

    sort(data, 0, SIZE) ;
    dump(data, SIZE) ;

    return 0;
}

int sort(int data[], int start, int end) {
    int temp;
    int k = start ;
    while (start<end) {
        dump(data, SIZE) ;
        for (int i=start;i<end;i++) {
            if (data[k] < data[i]) {
                start = i;
                break ;
            }
        }

        for (int i=end-1;i>k;i--) {
            if (data[k]>data[i]) {
                end = i;
                break;
            }
        }

        if (start<end) {
            temp = data[start];
            data[start] = data[end] ;
            data[end] = temp ;
        } else if (start>=end) {
            temp=data[k];
            data[k]=data[end];
            data[end]=temp;
            return end ;
        }
    }
}

void dump(int data[], int length) {
    for (int i=0;i<length;i++) {
        printf("%d ", data[i]) ;
    }
    printf("\n");
}

