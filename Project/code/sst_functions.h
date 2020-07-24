
#ifndef	GAME_VARS
#define GAME_VARS
typedef struct
{

	//ints
	int dock_flag, damage_rep_flag; 
	int curr_energy, start_energy;
	int quad_name;
	int kling_data, kling_start;
	int kling_quad, kling_left, kling_pow;;
	int torp_left, torp_cap;
	int ent_quad1, ent_quad2;
	int temp_pos1, temp_pos2; 
	int shields, stars;
	int stardate_start, stardate_done, temp_sect_coord1;
	int temp_sect_coord2;
	int starbase_quadrant;
	int starbase_total;
	int starbase_location[2];
	int galaxy[8][8];
	int galaxy_record[8][8];
	
	//doubles
	double repair_time;
	double ent_sect1, ent_sect2; 
	double stardate_curr;
	double warp_factor;
	double navx1, navy1, navx2, navy2;
	double damage[8];

	//strings
	char obj_in_sector[4];
	char condition[7];
	char quad_disp[194];
	char temp_str[100];
	char command[6];

}GameVariables;
#endif

#ifndef SST_FUN
#define SST_FUN

	void intro(void);
	void clear(GameVariables *game_vars);
	void initialize(GameVariables *game_vars);
	void event_handler(GameVariables *game_vars);
	void command_help(void);


#endif


