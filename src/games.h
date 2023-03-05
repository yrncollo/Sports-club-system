#include <iostream>
#include <iomanip>

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

inline void Games::damages()
{
	std::cout << "The following are our equipments\n";
	std::cout << "\t 1. balls \n";
	std::cout << "\t 2. Bases \n";
	std::cout << "\t 3. Bats \n";
	std::cout << "\t 4. Sticks \n";
	std::cout << "\t 5. Racquets \n";
	std::cout << "\t 6. Nets \n";
	std::cout << "\t 7. flying discs \n";
	std::cout << "\t 8. Cocks \n";

	int choice;
	do {
        std::cout << "Enter the number of the item that has been damaged (1-8), or 0 to finish: ";
        std::cin >> choice;
        
        if (choice > 0 && choice <= 8) {
            total_price += prices[choice-1];
	    receipt += items[choice-1] + ": Ksh " + std::to_string(prices[choice-1]) + "\n";
            std::cout << items[choice-1] << " added to damages cart. Current total damages: ksh " << total_price << "\n";
        } else if (choice != 0) {
            std::cout << "Invalid choice. Please enter a number between 1 and 8, or 0 to finish.\n"  ;
        }
    } while (choice != 0);


}



inline void Games::damages_recipt()
{
	std::stringstream ss;
    	ss << std::fixed << std::setprecision(2) << ((total_price * 110) / 100);
	receipt += "Total plus 10% increas plus 10% increasee: Ksh " + ss.str()  + "\n";
	std::cout << "Your total damages cost is Ksh " << std::fixed << std::setprecision(2) << total_price << std::endl;
	std::cout << receipt << std::endl;


}



inline float Games::calculate_facilitation_fee(int num_team_members, bool external_team)
{
	float facilitation_fee = 0;

	if (external_team) {
        facilitation_fee = num_team_members * 500;
        float patron_commission = facilitation_fee * 0.2;
        facilitation_fee += patron_commission;
    }
    
    return facilitation_fee;

}

inline void Games::run_facilitation_fee()
{

	int num_team_members = 10; // This should read from the database 
	bool external_team;

	std::cout << "Is the team external or internal? (1 for external, 0 for internal): ";
	std::cin >> external_team;
    
	float facilitation_fee = calculate_facilitation_fee(num_team_members, external_team);
    
	std::cout << "Facilitation fee: " << facilitation_fee << std::endl;


}
