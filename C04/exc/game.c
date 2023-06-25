#include <stdio.h>

// Define clear the console, it's work only in linux
void cl() {
	char system(char *command);
    system("clear");
}

int main(void) {
    char x;
    int y;

    // Clear function 
    cl();

    // Display the menu options
    printf("Chess Game\n1: Start Game\n2: Option\n3: About Game\n4: Exit Game\nEnter your choice: ");
    scanf(" %c", &x);

    // The choice
    switch (x) {
        case '1':
            cl();
            
            // Display the game
            puts("\033[1;33m!Important\033[0m : uppercase: Black peices & lowercase: White pieces\n");
            puts("[░R][ N][░B][ Q][░K][ B][░N][ R]");
            puts("[ P][░P][ P][░P][ P][░P][ P][░P]");
            puts("[░░][  ][░░][  ][░░][  ][░░][  ]");
            puts("[  ][░░][  ][░░][  ][░░][  ][░░]");
            puts("[░░][  ][░░][  ][░░][  ][░░][  ]");
            puts("[  ][░░][  ][░░][  ][░░][  ][░░]");
            puts("[░p][ p][░p][ p][░p][ p][░p][ p]");
            puts("[ r][░n][ b][░q][ k][░b][ n][░r]");
            break;

        case '2':
            cl();
            
            // Display the menu of option menu
            printf("1: Controls\n2: Display\n3: Sound\nEnter a choice: ");

            // The choice
            // Another Solution :
            
            /*ch = getchar();
			fflush(stdin);
			ch = getchar(); */
			
			// To this
            while ((y = getchar()) != '\n' && y != EOF);
			y = getchar();
			
			// There's no choice
            switch (y) {
                case 1:
                    puts("There's no Option, This for exercise");
                    break;
                default:
                    puts("Also There's no Option, Just exercise");
                    break;
            }
            break;

        case '3':
            cl();

            // Information about the game
            printf("Exercise: Menu Game\nAuthor: almighwar\nAccounts:\n\tLichess: almighwar_1\n\tChess.com: almighwar\n\nAbout the game: 2D Chess Game to learn chess tikitaka and games and solve puzzles\n\tit'll take another dimensions\n");
            break;
            
		// Exit the game
        case '4':
            puts("Exiting...");
            break;
    }

    return 0;
}
