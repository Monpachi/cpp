#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

extern std::string g_err;

class Contact
{
    public:
		std::string get_First_name();
		std::string get_Last_name();
		std::string get_Nickname();
		void set_First_name(std::string name);
		void set_Last_name(std::string name);
		void set_Nickname(std::string nickname);
		void set_Phone(std::string phone);
		void set_Dark(std::string dark);
		void set_Relation(std::string relation);
		void set_Age(std::string age);
		void show();
		// Contact();

    private:
        std::string First_name;
		std::string Last_name;
		std::string Nickname;
		std::string Phone_number;
		std::string Darkest_secret;
		std::string Relationship_status;
		std::string Age;
};

#endif
