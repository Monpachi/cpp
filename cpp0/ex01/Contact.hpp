#include <iostream>

class Contact
{
    public:
		std::string get_First_name() {return First_name;}
		void set_First_name(std::string name) {First_name = name;}
		void show();
		Contact();

    private:
        std::string First_name;
		std::string Last_name;
		std::string Nickname;
		std::string Phone_number;
		std::string Darkest_secret;
		std::string Relationship_status;
		unsigned int Age;
};

Contact::Contact() {
	this->First_name = "Seth";
	this->Last_name = "Chan";
	this->Nickname = "El Tombeur";
	this->Phone_number = "0123456789";
	this->Darkest_secret = "Like to give candies to kids";
	this->Relationship_status = "Still Single, interested?";
}

void Contact::show() {
	std::cout << this->First_name << std::endl;
	std::cout << this->Last_name << std::endl;
	std::cout << this->Nickname << std::endl;
	std::cout << this->Phone_number << std::endl;
	std::cout << this->Darkest_secret << std::endl;
	std::cout << this->Relationship_status << std::endl;
}
