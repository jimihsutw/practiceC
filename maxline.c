#include <stdio.h>
#define MAX 1000

/*
int getline(char[], int) ;
void copy(char[], char[]) ;

int main() {
    int max=0 ;
    int len=0 ;
    char line[MAX] ;
    char longest[MAX] ;

    while ((len=getline(line, MAX)) > 0 ) {
        if (len > max) {
            max = len ;
            copy(line, longest) ;
        }
    }

    if (max > 0) {
        printf("%s", longest) ;
    }

    return 0 ;
}

int getline(char line[], int max) {
    int ch, cnt ;

    for (cnt=0;cnt<max-1 && (ch=getchar()) != EOF && ch != '\n'; cnt++) {
        line[cnt] = ch ;
    }
    if (ch == '\n') {
        line[cnt] = ch ;
        cnt++ ;
    }
    line[cnt] = '\0' ;

    return cnt ;
}


void copy(char from[], char to[]) {
    int cnt=0 ;

    while ((to[cnt]=from[cnt]) != '\0') {
        cnt++ ;
    }
}
*/

// another version
char line[MAX] ;
char longest[MAX] ;
int getline(int) ;
void copy(void) ;

int main() {
    int max=0 ;
    int len=0 ;
    // extern char line[] ;
    // extern char longest[] ;

    while ((len=getline(MAX)) > 0 ) {
        if (len > max) {
            max = len ;
            copy() ;
        }
    }

    if (max > 0) {
        printf("%s", longest) ;
    }

    return 0 ;
}

int getline(int max) {
    int ch, cnt ;
    // extern char line[] ;

    for (cnt=0;cnt<max-1 && (ch=getchar()) != EOF && ch != '\n'; cnt++) {
        line[cnt] = ch ;
    }
    if (ch == '\n') {
        line[cnt] = ch ;
        cnt++ ;
    }
    line[cnt] = '\0' ;

    return cnt ;
}


void copy() {
    int cnt=0 ;
    // extern char line[];
    // extern char longest[];

    while ((longest[cnt]=line[cnt]) != '\0') {
        cnt++ ;
    }
}
