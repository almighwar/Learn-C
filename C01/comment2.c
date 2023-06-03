/*

********************************************************
	Project Name :
********************************************************

Author(s) :
Date of last revision :
Version :
Author(s) revision :
Date of revision :

Feature :
					This project allows you to display character strings
		and preprogrammed calculation.


Necessary libraries :
							stdio.h				-	native for the compiler
							maBibliotheque.h	-	personnel

Functions used :
					int  (int nbr_1, int nb_2, int nbr_3)

					myAdditionFunction : calculates an addition of 3 integers
					parametres d'entree : 3 nombres entiers
					parametres de sortie : resultat de l'addition

					void monAutreFonction(void)

					monAutreFonction : fait quelque chose
					parametres d'entree : aucun
					parametres de sortie : aucun
*/


/*
-----------------------------------------
Declaration of libraries used
-----------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

/*
-----------------------------------------
Declaration des equivalences
-----------------------------------------
*/


/*
-----------------------------------------
Declaration of function prototypes
-----------------------------------------
*/

/*
-----------------------------------------
Global declaration of variables
-----------------------------------------
*/



unsigned char variable_1 =200;
char variable_2 = -100;
unsigned int variable_3 = 500;
int variable_4 = -2000;
float variable_5 = 10.568;
double variable_6 = 521.65896;

/*
-----------------------------------------
			MAIN PROGRAM
-----------------------------------------
*/
int main()
{
// 	printf("Les valeurs des variables d'origine sont les suivantes:\n");
//  printf("-------------------------------------------------------\n\n");
// 
//  printf("\tunsigned char variable_1 : %u\n",variable_1);
//  printf("\tchar variable_2 : %d\n",variable_2);
//  printf("\tunsigned int variable_3 : %u\n",variable_3);
//  printf("\tint variable_4 : %d\n",variable_4);
//  printf("\tfloat variable_5 : %.2f\n",variable_5);           // we stop at 2 digits after the decimal

//  printf("\tdouble variable_6 : %f\n\n",variable_6);

//  printf("-------------------------------------------------------\n\n");
// 
//  variable_1=(char)variable_1;                                // conversion from unsigned to signed type
//  printf("\t(char)variable_1 = %d\n",variable_1);             // signed ->%d
// 
//  variable_2=(unsigned char)variable_2;                                   // conversion from signed to unsigned type
//  printf("\t(unsigned char)variable_2 = %u\n",variable_2);                // unsigned ->u
// 
//  variable_3=(int)variable_3;                                     // conversion from type signed to signed
//
//  printf("\t(int)variable_3 = %d\n",variable_3);                  // signed ->%d
// 
//  variable_4=(unsigned int)variable_4;                            // conversion from type signed to unsigned
//  printf("\t(int)variable_4 = %u\n\n",variable_4);                // unsigned ->%u
// 
    printf("-------------------------------------------------------\n\n");

    variable_5=(float)variable_1/variable_2;
    printf("The new variable_5 after calculation is worth: %.2f\n\n",variable_5);

    variable_6 = (float) variable_6;
    printf("\t(float) variable_6 = %f\n\n",variable_6);                // unsigned ->%d

    return 0;
}
