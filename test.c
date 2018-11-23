#include "stdio.h"

#define justtest 'B'

int main(){

int i = 0;

for(i = 0; i < 100; i++) {
i += i; 
}

printf("i = %d\n", i);

return 0;
}
