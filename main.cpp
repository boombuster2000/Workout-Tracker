#include <iostream>
#include <string>
#include <vector>

#define print(message) std::cout << message

class User {
private:
	std::string m_username;
	std::string m_password;

public:
	User(std::string username, std::string password) {
		m_username = username;
		m_password = password;
	}


};


char menu() {
	system("cls");
	char option;
	while (true) {
		print("Menu\n1) Login\n2) Sign Up\n3) Quit\n\n>> ");
		std::cin >> option;

		char validOptions[3] = { '1', '2', '3' };

		for (int i = 0; i < 3; i++) {
			if (option == validOptions[i]) {
				return option;
			}
		}
	}
}


void login() {


}

User signUp() {
	system("cls");
	print("Sign Up\n");

	std::string username;
	print("Enter a Username: ");
	std::cin >> username;
	
	std::string password;
	print("Enter a Password: ");
	std::cin >> password;

	return User(username, password);

}

int main() {

	char option;
	do {
		option = menu();
		switch (option)
		{
		case '1':
			login();
			break;
		case '2':
			signUp();
			break;
		default:
			break;
		}
	} while (option != '3');

}