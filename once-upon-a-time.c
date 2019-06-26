/*	Everyone must contribute atleast 5 lines of code
	The story must be somehow relatable to the previous contexts.
	You can use only C.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	printf("\n------------------------------\n");
	printf("\tText Based Adventure\n");
	printf("------------------------------\n");

	printf("Suddenly there is a knock in the door.... \n");
	printf("\nKNOCK !! KNOCK !!\n");
	printf("\nPeter: Who's there?");

	char reply[100];
	printf("\nYou: "); scanf('%c', reply);

	if (reply == "me") {
		/*code here*/
	} else if (reply == "ghost") {
		/*code here*/

	} else if (reply == "police") {
		/*code here*/

	} else {
		/*code here*/

	}

	return 0;
}
