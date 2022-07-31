#include <stdio.h>
#define SIZE 10

int main() {
    int data[] = {35, 10, 42, 3, 79, 12, 62, 18, 51, 23} ;

    sort(data, 0, SIZE-1) ;
    dump(data, SIZE) ;

    return 0;
}

void sort(int data[], int start, int end) {
    int temp, flag;
    int k = start ;
    int last = end ;
    while (start<end) {
        flag=0;
        dump(data, SIZE) ;
        for (int i=start;i<=end;i++) {
            if (data[k] < data[i]) {
                start = i;
                flag+=1;
                break ;
            }
        }

        for (int i=end;i>k;i--) {
            if (data[k]>data[i]) {
                end = i;
                flag+=2;
                break;
            }
        }

        if (start<end) {
            if (data[start]<data[end]) {
                return ;
            }

            temp = data[start];
            data[start] = data[end] ;
            data[end] = temp ;
        } else if (start>=end) {
            if (data[k]<data[end]) {
                return ;
            }
            temp=data[k];
            data[k]=data[end];
            data[end]=temp;

            sort(data, k, end-1) ;
            sort(data, end+1, last);
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

