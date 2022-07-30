#include <stdio.h>
#include <string.h>
#define CITY_NAME_LEN 20

int isDuplicate(char cities[][CITY_NAME_LEN], char city[CITY_NAME_LEN], int n) ;

int main() {
    int n, num_city ;
    char cities[100][CITY_NAME_LEN];
    char city[CITY_NAME_LEN] ;
    int result[50] = {0} ;
    
    scanf("%d", &n) ;

    for (int i=0;i<n;i++) {
        scanf("%d", &num_city) ; // 欲輸入城市數

        memset(cities, 0, sizeof(cities)) ; // 清空陣列
        int count_city = 0 ;
        for (int j=0;j<num_city;j++) {
            memset(city, 0, sizeof(city)) ; // 清空陣列
            scanf("%s", city) ; // 取得本次輸入的城市名

            /*
              判斷城市名稱是否已在陣列內
              (第一次不用判斷是否重覆)
             */
            if (j==0 || isDuplicate(cities, city, count_city) == 0) {
                // 沒重覆, 就將城市名稱放入陣列，同時 count 數 +1
                memcpy(cities[count_city++], city, sizeof(city)) ;
            }
        }

        result[i] = count_city ; // 將計算結果存入另一個陣列
    }

    for (int k=0;k<n;k++) {
        printf("%d\n", result[k]) ;
    }

    return 0 ;
}

int isDuplicate(char cities[][CITY_NAME_LEN], char city[CITY_NAME_LEN], int limit) {
    for (int i=0;i<limit;i++) {
        int found = 1 ;
        for (int k=0;k<CITY_NAME_LEN;k++) {
            if (cities[i][k]==0 || city[k]==0) { // 比對到 '0' 就結束
                break ;
            } else if (cities[i][k] != city[k]) { // 發現字元不同，代表沒重覆, 結束
                found = 0;
                break ;
            }
        }
        // 比對完都沒有不一樣的字元，代表重覆
        if (found == 1) {
            return 1 ;
        } // for (int k=0;k<CITY_NAME_LEN;k++) {
    } // for (int i=0;i<n;i++) {

    return 0 ;
}