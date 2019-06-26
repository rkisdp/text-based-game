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
		/*Rahul Kumar - I know python not c/cpp but still rule is rule*/
		printf("\nPeter: Me, who?"); /*Rahul Kumar*/
	} else if (reply == "ghost") {
		/*code here*/
		printf("\nPeter: Ok if you are ghost then I'm not going open the door?"); /*Rahul Kumar*/
	} else if (reply == "police") {
		/*code here*/
		printf("\nPeter: Just Wait for a while, coming"); /*Rahul Kumar*/
	} else if (reply == "your son") {
		/*code here*/
		printf("\nPeter: Ok love, coming"); /*Rahul Kumar*/
	} else {
		/*code here*/
		printf("\nPeter: I'm busy, please come after sometime if not important"); /*Rahul Kumar*/
	}

	return 0;
}
