#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

int choice;
int value;
Node *head=NULL;
Node *tail=NULL;
do {

printf("What do you want to do with your list?\n");
printf("1. Insert head.\n");
printf("2. Insert tail.\n");
printf("3. Delete a node.\n");
printf("4. Delete all.\n");
printf("5. Diplay.\n");
printf("6. Exit.\n");

scanf("%d",&choice);


if (choice == 1){
	printf("You chose to insert a value at the head.\n");
	printf ("Please enter a value: ");
	scanf("%d",&value);
	head=List_insert(head,value);
	if(tail == NULL){
	tail = head;
	}

}



else if(choice == 2){
	printf("You chose to insert a value at the end/tail. \n");
	printf("Please enter a value: ");
	scanf("%d", &value);
	tail=List_insert_Last(head,value);
	if(head == NULL){
	head = tail;
	}
}

else if(choice == 3){
	printf("You chose to delete a node. \n");
	printf("Please enter the node value. ");
	scanf("%d", &value);
	head = List_delete(head,value);
}

else if (choice == 4){
	printf("You chose to delete all. \n");
	List_destroy(head);
}

else if(choice == 5){
	printf("Displaying the list.\n");
	List_print(head);
}
else if (choice == 6){
	printf("Thanks for using the program.\n");
	return 0;
}
else {
	printf("Error: Invalid input. Run the program again.");
	return 0;
}

}while (choice < 6);



return 0;
}
