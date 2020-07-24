

#include <stdio.h>

int FindRandom (void){
	srand(time(0));
	int random = (rand() % 8);
	
	return random;
}

int FindDistance (int entX, int entY, int klingX, int klingY){
    int double

int main()
{
    //int variables         
    int dockFlag;                       //Docked Flag
    int damRepFlag;                     //Damage Repair Flag 
    int currEnergy;                     //Current Energy 
    int startEnergy;                    //Starting Energy 
    int galaxy[8][8];                   //Galaxy 
    int quadName;                       //Quadrant Name Flag 
    int klingData [3][3];               //Klingon Data
    int klingStart;                     //Klingons at Start 
    int klingQuad;                      //Klingons in Quadrant 
    int klingLeft;                      //Klingons Left 
    int torpLeft;                       //Photon Torpedos Remaining 
    int torpCap;                        //Photon Torpedos Capacity 
    int entQuad1; 
    int entQuad2;                       //Quadrant Position of Enterprise 
    int tempPos1;
    int tempPos2;                       //Temp Location Coordinates        
    int shields;                        //Current shields                 
    int stars;                          //Stars in Quadrant
    int quadIndex;                      //Quadrant quadIndex
    int klingPow;                       //Klingon Power
    int stardateStart;                  //Starting stardate
    int stardateDone;                   //End time
    int galaxyRecord[8][8];             //Galaxy Record
    int tempSectCoord1;
    int tempSectCoord2;                 //Temporary Sector Coordinates
    int compare;                        //String compare value
    int tempQuadCoord1;
    int tempQuadCoord2;                 //Temporary Quadrant Coordinates
    

    //double variables
    double damage[8];                   //Damage
    double repairTime;                  //Repair time
    double entSect1;
    double entSect2;                    //Current Sector Position of Enterprise
    double stardateCurr;                //Current Stardate 
    double warpFactor;                  //Warp Factor
    double navX, navY, navX1, navX2;    //Navigation Coordinates
    
    
    
    
    //char variables
    
    
    
    //***LINE 220***
	printf("                                    ,------*------,");
    printf("                    ,-------------   '---  ------'");
	printf("                     '-------- --'      / /");
	printf("                         ,---' '-------/ /--,");
	printf("                          '----------------'");
	printf("                    THE USS ENTERPRISE --- NCC-1701");
    

    
    //***LINE 480*** Initialize Enterprise's Position 
	entQuad1 = FindRandom;
	entQuad2 = FindRandom;
	entSect1 = FindRandom;
	entSect2 = FindRandom;

    return 0;
}
