#include <stdio.h>
#include <string.h>

/*
Input
The first and only line of input contains a single integer N,3≤N≤100 denoting the number of vertices.

Output
Output the number of intersections on a single line.

   n*(n-1)*(n-2)*(n-3)/24
*/
int main() {
    int n, x;
    int ans ;

    x = scanf("%d", &n) ;

    ans = n*(n-1)*(n-2)*(n-3)/24 ;

    printf("%d\n", ans) ;

    return 0 ;
}