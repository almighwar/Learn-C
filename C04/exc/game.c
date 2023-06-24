#include <stdio.h>

int main(void) {
    char x;
    int y, i;
    char system(char *command);

	void cl() {
		system("clear");
	}
	
	cl();
	
    printf("1: Start Game\n2:Option\n3:About Game\n4:Exit Game\nEnter your choice: ");
	scanf(" %c", &x);
	
	switch(x) {
		case '1':
			/* for (i=0; i<65; i++)
				printf("\f\n"); */	
			cl();
			
			puts("[░R][ K][░B][ Q][░K][ B][░K][ R]");
			puts("[ P][░P][ P][░P][ P][░P][ P][░P]");
			puts("[░░][  ][░░][  ][░░][  ][░░][  ]");
			puts("[  ][░░][  ][░░][  ][░░][  ][░░]");
			puts("[░░][  ][░░][  ][░░][  ][░░][  ]");
			puts("[  ][░░][  ][░░][  ][░░][  ][░░]");
			puts("[░p][ p][░p][ p][░p][ p][░p][ p]");
			puts("[ r][░k][ b][░q][ k][░b][ k][░r]");
			break;
			
		case '2':
			cl();
			
			printf("1:Controls\n2:Display\n3:Sound\n");
 			y = getchar();
 			
		    switch(y!=1){
				case 1:
					puts("There's no Option, This for exrcice");
					break;
				case 0:
					puts("Also There's no Option, Just exercice");
					break;
			}
			break;
					
		case '3':
			cl();
			
			printf("Exercie: Menu Game\nAuthor: almighwar\nAccounts:\n\tLichess: almighwar_1\n\tChess.com: almighwar\nAbout Game: 2D Chess Game to learn chess tikitaka and games and solve puzlle, it'll take another dimensions\n");
			break;
		
		case '4':
			puts("Exiting...");
			break;
	}
	return (0);
}
