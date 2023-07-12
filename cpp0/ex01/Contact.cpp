#include "Contact.hpp"

// Contact::Contact() {
// 	this->First_name = "Seth";
// 	this->Last_name = "Chan";
// 	this->Nickname = "El Tombeur";
// 	this->Phone_number = "0123456789";
// 	this->Darkest_secret = "Like to give candies to kids";
// 	this->Relationship_status = "Still Single, interested?";
// }

std::string Contact::get_First_name() {
	return First_name;
}
std::string Contact::get_Last_name() {
	return Last_name;
}
std::string Contact::get_Nickname() {
	return Nickname;
}
void Contact::set_First_name(std::string name) {
	First_name = name;
}
void Contact::set_Last_name(std::string name) {
	Last_name = name;
}
void Contact::set_Nickname(std::string nickname) {
	Nickname = nickname;
}
void Contact::set_Phone(std::string phone) {
	Phone_number = phone;
}
void Contact::set_Dark(std::string dark) {
	Darkest_secret = dark;
}
void Contact::set_Relation(std::string relation) {
	Relationship_status = relation;
}
void Contact::set_Age(std::string age) {
	Age = age;
}


void Contact::show() {
	std::cout << "First name :" << this->First_name << std::endl;
	std::cout << "Last name :" << this->Last_name << std::endl;
	std::cout << "Nickname :" << this->Nickname << std::endl;
	std::cout << "Phone_number :" << this->Phone_number << std::endl;
	std::cout << "Darkest_secret :" << this->Darkest_secret << std::endl;
	std::cout << "Relationship_status :" << this->Relationship_status << std::endl;
}
