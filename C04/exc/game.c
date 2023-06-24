   /*---------------------------------------*/
  /*                AYOUB                  */
 /*                uncomplet              */
/*---------------------------------------*/


#include <stdio.h>

int main(void) {
    int x, i;
    int y;
    
    printf("1: Start Game\n2:Option\n3:About Game\n4:Exit Game\nEnter your choice: ");
	scanf(" %d", &x);
	
	switch(x==1) {
		case 1:
			for (i=0; i<65; i++)
				printf("\f\n");

			printf("\fThere's no game press any key to exit...\n");
			y = getchar();
			
			switch(y != 'z') {
				case 1:
					break;
				case 0:
					break;
			}
			
		break;
	}    


	return (0);
}
