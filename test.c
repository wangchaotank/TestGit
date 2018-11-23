#include "stdio.h"
#include "check.h"

// New BranchC 
// Chang 3

int main(){

int i = 1;

for(i = 1; i < 100; i++) {
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
