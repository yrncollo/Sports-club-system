#ifndef MAIN_H
#define MAIN_H 


#include <iostream>
#include <string>
#include <sys/types.h>
#include <iomanip>
#include <vector>


class maringo
{
	private:
		int individual_fee = 1000;
		int group_fee = 500;

	public:
		std::string admNo;
		std::string stdClass; //student class
		std::string schoolName;
		std::string location;
		int num_members;

		void welcome();
		void school();
		void religious();
		void registration();
		void individual();
		int calculate_individual_fee() {
		    return individual_fee;
		}


		int calculate_group_fee(int num_members) {
		    return group_fee * num_members;
		}
};

class Games
{
	public:

		std::string items[8] = {"Balls", "Bases", "Bats", "Sticks", "Racquets", "Nets", "Flying discs", "Cocks"};
		int prices[8] = {250, 750, 2000, 350, 3000, 1000, 800, 450};
		float total_price = 0;
		std::string receipt;


		void damages();
		void damages_recipt();
		float calculate_facilitation_fee(int num_team_members, bool external_team);
		void run_facilitation_fee();

		
};


class shop
{
	public:
		std::string receipt;
		float total_price = 0;


		void items();
		void recipt(); // This is not a typo but...


};





#endif
