#include "stdio.h"
#include "check.h"

// New BranchC 


int main(){

int i = 0;

for(i = 0; i < 100; i++) {
i += i; 
}

printf("i = %d\n", i);

if(true == check(i)){

printf ("%d is a double num!\n", i);
} else {
printf ("%d is a single num!\n", i);
}

return 0;
}
