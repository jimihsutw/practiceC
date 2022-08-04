#include <stdio.h>
#define SIZE 10

int main() {
    int data[] = {35, 10, 42, 3, 79, 12, 62, 18, 51, 23} ;

    sort(data, 0, SIZE-1) ;
    dump(data, SIZE) ;

    return 0;
}

void sort(int data[], int start, int end) {
    int temp, i, j;

    while (start<end) {
        dump(data, SIZE) ;
        for (i=start+1;i<=end;i++) {
            if (data[start] < data[i]) {
                break ;
            }
        }

        for (j=end;j>start;j--) {
            if (data[start]>data[j]) {
                break;
            }
        }

        if (i<j) {
            temp = data[i];
            data[i] = data[j] ;
            data[j] = temp ;
        } else if (i>=j) {
            temp=data[start];
            data[start]=data[j];
            data[j]=temp;

            sort(data, start, j-1) ;
            sort(data, j+1, end);
            return ;
        }
    }
}

void dump(int data[], int length) {
    for (int i=0;i<length;i++) {
        printf("%d ", data[i]) ;
    }
    printf("\n");
}

