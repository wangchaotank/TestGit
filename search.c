#include "search.h"

int findmax(int * arr, int len )
{
    int temp = 0;
    if (arr == NULL || len <= 0) {
        return 0;
    } else {
        int i = 0;
        for (i = 0; i < len; i++){
            if(temp < arr[i]){
                temp = arr[i];
            } 
        }
    }
    return temp;
}

