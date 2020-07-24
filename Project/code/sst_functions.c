#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>

#include "sst_functions.h"





void intro(void)
{
	/*
	This function displays the intro message and asks if user
	wants to display the instructions.

	TODO: Update the instructions to not be "test.txt"

	*/
	char resp[1];

	printf ("\n");
	printf (" *************************************\n");
	printf (" *                                   *\n");
	printf (" *                                   *\n");
	printf (" *      * * Super Star Trek * *      *\n");
	printf (" *                                   *\n");
	printf (" *                                   *\n");
	printf (" *************************************\n\n");

	printf("\nDo you need instructions (y/n): ");

	gets(resp);

	printf ("\n");
	if (resp[0] == 'y' || resp[0] == 'Y')
	{	
		FILE *file;
		char file_c;	
		file = fopen("test.txt","r");
		while((file_c=fgetc(file))!=EOF)
		{
			printf("%c",file_c);
		}
	}
	// Print the Enterprise	
	printf("                                 ,------*------,\n");
	printf("                 ,-------------   '---  ------'\n");
	printf("                  '-------- --'      / /\n");
	printf("                      ,---' '-------/ /--,\n");
	printf("                       '----------------'\n");
	printf("                 THE USS ENTERPRISE --- NCC-1701\n");

}


void clear(GameVariables *game_vars)
{
	//Initializing time
	game_vars->stardate_curr=(int)(rand()*20+20)*100;
	game_vars->stardate_start=stardate_curr
	game_vars->stardate_end = 25+(int)(rand()*10) 

	//Initialize Enterprise
	game_vars->dock_flag 		= 0;
	game_vars->start_energy 	= 3000;
	game_vars->curr_energy 		= game_vars->start_energy;
	game_vars->torp_cap 		= 10;
	game_vars->torp_left 		= game_vars->torp_cap;
	game_vars->shields 			= 0;
	game_vars->kling_pow 		= 200;
	game_vars->kling_left 		= 0;
	game_vars->starbase_total 	= 2;



}


void initialize(GameVariables *game_vars)
{
	/*
	Initializes the game variables
	*/

	// Initialize Time
	game_vars->stardate_curr = 

	// Initialize Enterprise
	game_vars->dock_flag = 0;
	game_vars->start_energy = 3000;
	game_vars->curr_energy = game_vars->start_energy;
	game_vars->torp_cap = 10;
	game_vars->torp_left = game_vars->torp_cap;
	game_vars->shields = 0;


	printf("%d",&game_vars);

}

void event_handler(GameVariables *game_vars)
{
	/*
	Initializes the game variables
	*/

	//Initialize Time
	if(strcmp(game_vars->command,"nav")==0)
	{
		printf("nav function\n");
	}
	else if (strcmp(game_vars->command,"srs")==0)
	{
		printf("srs function\n");		
	}
	else if (strcmp(game_vars->command,"lrs")==0)
	{
		printf("lrs function\n");		
	}
	else if (strcmp(game_vars->command,"pha")==0)
	{
		printf("pha function\n");		
	}
	else if (strcmp(game_vars->command,"tor")==0)
	{
		printf("tor function\n");		
	}
	else if (strcmp(game_vars->command,"she")==0)
	{
		printf("she function\n");		
	}
	else if (strcmp(game_vars->command,"com")==0)
	{
		printf("com function\n");		
	}
	else
	{
		command_help();
	}

}

void command_help(void)
{
      printf("Enter one of the following:\n\n");
      printf("  nav - To Set Course\n");
      printf("  srs - Short Range Sensors\n");
      printf("  lrs - Long Range Sensors\n");
      printf("  pha - Phasers\n");
      printf("  tor - Photon Torpedoes\n");
      printf("  she - Sheild Control\n");
      printf("  dam - Damage Control\n");
      printf("  com - Library Computer\n");
      printf("  xxx - Resign Command\n");
      printf("\n");
}