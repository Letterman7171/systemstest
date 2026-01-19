
# include <stdio.h>

int numbers[] = {25, 26, 27, 28, 28};
int sum = 0, i;

main(){

for (i = 0; i < 5; i++){

    sum += numbers[i];

}

printf("This is the sum of the array \n");
printf("%d", sum);

}