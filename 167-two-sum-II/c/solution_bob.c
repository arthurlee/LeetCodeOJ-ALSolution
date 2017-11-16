// bob's own vision
#include <stdio.h>
int main () {
    int x[] = {1 , 2 , 3 , 5 };
    int target = 3;
    while(1){
        if(x[1] + x[2] == target) {
            printf("x[1] , x[2]");
            break;
        }
        if(x[1] + x[3] == target) {
            printf("x[1] , x[3]");
            break;
        }
        if(x[1] + x[4] == target) {
            printf("x[1] , x[4]");
            break;
        }
        if(x[2] + x[3] == target) {
            printf("x[2] , x[3]");
            break;
        }
        if(x[2] + x[4] == target) {
            printf("x[2] , x[4]");
            break;
        }
        if(x[3] + x[4] == target) {
            printf("x[3] , x[4]");
            break;
        }
    }
}