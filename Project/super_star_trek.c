#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
NEEDED TO ACTIVATE 80-COLUMN TEXT MODE ON APPLE IIE
SUPER STARTREK - MAY 16,1978 - REQUIRES 24K MEMORY

       **** STAR TREK ****        ****
SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE,
AS SEEN ON THE STAR TREK TV SHOW.
ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY BOB
LEEDOM - APRIL & DECEMBER 1974,
WITH A LITTLE HELP FROM HIS FRIENDS . . .
COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
SEND TO : R. C. LEEDOM
          WESTINGHOUSE DEFENSE & ELECTRONICS SYSTEMS CNTR.
          BOX 746, M.S. 338
          BALTIMORE, MD  21203

CONVERTED TO MICROSOFT 8 K BASIC 3/16/78 BY JOHN GORDERS
LINE NUMBERS FROM VERSION STREK7 OF 1/12/75 PRESERVED AS
MUCH AS POSSIBLE WHILE USING MULTIPLE STATEMENTS PER LINE
SOME LINES ARE LONGER THAN 72 CHARACTERS; THIS WAS DONE
BY USING "?" INSTEAD OF "PRINT " WHEN ENTERING LINES
*/

int main()
{
	// Print the Enterprise	
	printf("                                    ,------*------,\n");
	printf("                    ,-------------   '---  ------'\n");
	printf("                     '-------- --'      / /\n");
	printf("                         ,---' '-------/ /--,\n");
	printf("                          '----------------'\n");
	printf("                    THE USS ENTERPRISE --- NCC-1701\n");

	// INIT variables
	char Z_char[96] = "                         ";
	int G[8][8], C[9][2], K[3][3], N[3], Z[8][8], D[8];
	int T = (rand()*20+20)*100;
	int T0 = T;
	int T9 = 25 + rand()*10; 
	int D0 = 0;

	return EXIT_SUCCESS;
}
