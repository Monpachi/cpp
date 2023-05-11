#include <iostream>

class PhoneBook
{
    public:
        void	ADD();
        void show();
    private:
        Contact Index[8];
};

void PhoneBook::show() {
	for (int i = 0; i < 8; i++) {
		std::cout << i << std::endl;
		this->Index[i].show();
        std::cout << std::endl;
	}
}
