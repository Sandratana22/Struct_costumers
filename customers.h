
#ifndef customers_h
#define customers_h

struct MyStruct {
	int id;
	std::string name;
	std::string email; 
};  

void displayCustomerInformation(const MyStruct& customer);

#endif 
