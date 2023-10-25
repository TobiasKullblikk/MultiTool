#include "Account.h"

using namespace std;


Account::Account(string name, int balance, string secret) 
{
	this->name = name;
	this->balance = balance;
	this->secret = secret;
}