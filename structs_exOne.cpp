#include <stdio.h>
#include <string.h>
struct Player
{
	char name[20];
	int score;
};
int main()
{
	struct Player player1;
	struct Player player2;
	
	//to assign a string to structs we use the string copy method
	strcpy(player1.name, "Elliot");
	player1.score=4;
	
	strcpy(player2.name, "Walker");
	player2.score=4;
	
	printf("------------------------------\n");
	//to display
	printf("Player One= %s\n", player1.name);
	printf("Player one score= %d\n", player1.score);
	
	printf("-------------------\n");
	printf("Player two= %s\n", player2.name);
	printf("Player two score= %d", player2.score);
	return 0;
}
