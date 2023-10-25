#include <string>

class Account {
	private:
		std::string secret;
	public:
		Account(std::string name, int balance, std::string secret);
		int balance;
		std::string name;
		void updateBalance(int balance);
};