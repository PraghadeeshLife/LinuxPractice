#include <stdio.h>
#include <stdlib.h>

int main(){
	int alpha = 254;
	int retain = alpha;
	int reversed = 0;
	while(alpha!=0){
		reversed = (reversed*10) + (alpha%10);
		alpha = alpha/10;
	}
	printf("The Number: %d \n", retain);
	printf("Reversed : %d \n", reversed);
	return 0;
}
