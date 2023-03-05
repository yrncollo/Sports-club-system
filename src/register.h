#include "main.h"

struct details
{
	std::string full_name;
	char gender;
	std::string next_of_kin;
	std::string date_of_birth;
	std::string contact_details;
	std::string sub_counties;
	std::string school_or_college;
	std::vector<std::string> games_of_interest;
	int weight;
	int height;
	std::string special_needs;
};



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

inline void maringo::welcome()
{
	int inpt;
	system("clear");
	std::cout << "\t\t|-----------------------------------------------|" << "\n";
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|     WELCOME TO MARINGO SPORTS CLUB SYSTEM     |" << "\n";
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t| Maringo offers the following games:           |" << "\n"; 
	std::cout << "\t\t| \t 1) Swimming \t 2) Hockey              |" << "\n"; 
	std::cout << "\t\t| \t 3) Lawn tennis  4) Table tennis        |" << "\n"; 
	std::cout << "\t\t| \t 5) Darts \t 6) Badminton           |" << "\n"; 
	std::cout << "\t\t| \t 7) Volleyball \t 8) Basketball          |" << "\n"; 
	std::cout << "\t\t| \t 9) Netball \t 10) Football           |" << "\n"; 
	std::cout << "\t\t| \t 11) Baseball \t 12) Rugby              |" << "\n"; 
	std::cout << "\t\t| \t 13) Pool \t 14) Chess              |" << "\n"; 
	std::cout << "\t\t| \t 15) Draft                              |" << "\n"; 
	std::cout << "\t\t|                                               |" << "\n"; 
	std::cout << "\t\t|-----------------------------------------------|" << "\n\n\n";

	registration();

}


inline void maringo::registration()
{
	details youth;

	    char choice;

	    std::cout << "Please provide the following details:\n";
	    std::cout << "Full name: ";
	    std::getline(std::cin, youth.full_name);
	    std::cout << "Gender (M/F/O): ";
	    std::cin >> youth.gender;
	    std::cout << "Next of kin: ";
	    std::cin.ignore();
	    std::getline(std::cin, youth.next_of_kin);
	    std::cout << "Date of birth (DD/MM/YYYY): ";
	    std::getline(std::cin, youth.date_of_birth);
	    std::cout << "Contact details: ";
	    std::getline(std::cin, youth.contact_details);
	    std::cout << "Sub-counties: ";
	    std::getline(std::cin, youth.sub_counties);
	    std::cout << "School or college: ";
	    std::getline(std::cin, youth.school_or_college);
	    std::cout << "Games of interest (in order of priority, separated by spaces): ";
	    std::string game;
	    while (std::cin >> game) {
		        if (game == "done") { // or any other end value
			break; // exit the loop
			    }
		youth.games_of_interest.push_back(game);
	    }
	    std::cout << "Weight (in kg): ";
	    std::cin >> youth.weight;
	    std::cout << "Height (in cm): ";
	    std::cin >> youth.height;
	    std::cout << "Special needs: ";
	    std::cin.ignore();
	    std::getline(std::cin, youth.special_needs);

	    std::cout << "\nDo you want to register as an individual or as a group? (I/G): ";
	    std::cin >> choice;
	    if (choice == 'I') {
		std::cout << "Your individual membership fee is Kshs. " << calculate_individual_fee() << std::endl;
	    } else if (choice == 'G') {
		int num_members;
		std::cout << "Number of members in your group: ";
		std::cin >> num_members;
		std::cout << "Your group membership fee is Kshs. " << calculate_group_fee(num_members) << std::endl;
	    } else {
		std::cout << "Invalid choice!" << std::endl;
	    }
}


