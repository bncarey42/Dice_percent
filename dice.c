#include <stdio.h>
#include <stdlib.h>

int main(){

	int dice1, dice2;
	int j, roll; //j will hold the counter, roll will hold the number of rolls
	float c; //c will hold the counter
    float p; //percent
    j = 0;

/*
Point of fact
computers DO NOT generate random numbers
*/
    printf("Please enter the number of dice rolls: \n"); //capture number of rolls
    scanf("%d", &roll);

	srand(time(NULL)); //initiates the random number series

	for( c=0; c<roll; ++c){

		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;

		/*printf("Dice 1 = %d \n", dice1);
		printf("Dice 2 = %d \n", dice2);
		if(dice1 + dice2 == 7){
            printf("7! YOU WIN");
		}*/
		if( dice1 + dice2 == 7){
           j += 1;
		}
	}
	p = (j*100)/roll;
    printf("you rolled seven %d times \n", j);
    printf("that's %f percent \n", p);

return 0;
}
