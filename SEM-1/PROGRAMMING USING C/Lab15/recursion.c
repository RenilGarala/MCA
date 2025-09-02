#include <stdio.h>

int sum(int start){
    if(start == 10){
        return start;
    } else {
        start+=1;
        return sum(start);
    }
}

int main(){
    int start = 0, result;
    result = sum(start);
    printf("result %d", result);
    return 0;
}