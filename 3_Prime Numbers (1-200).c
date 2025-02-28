/* 
Write a program to print prime number from 1 to 200. 
*/

#include <stdio.h>

int main() {
    int i;
    for(i = 2; i <= 200; i++) {
        int j, flag = 0;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}