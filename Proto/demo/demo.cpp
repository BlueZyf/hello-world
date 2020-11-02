#include <iostream>
#include <string>
#include "project.pb.h"


int main()
{
	Account account;
	account.set_id(1000);
	account.set_name("name");
	account.set_password("password");

	//序列化
	std::string s = account.SerializeAsString();
	if(s.size() == 0) {
		std::cout << "error in SerializeAsString" << std::endl;
	}
	Account nAccount;
    //反序列化
	if(nAccount.ParseFromString(s)) {
		std::cout << nAccount.id() << std::endl;
		std::cout << nAccount.name() << std::endl;
		std::cout << nAccount.password() << std::endl;
	} else {
		std::cout << "error in ParseFromString" << std::endl;
	}

	return 0;
}