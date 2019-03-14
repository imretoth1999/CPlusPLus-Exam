#pragma once
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
class User {
private:
	std::string name;
	std::string type;
public:
	User(std::string name, std::string type)
	{
		this->name = name;
		this->type = type;
	}
	std::string getName() { return this->name; }
	std::string getType() { return this->type; }
	friend std::istream& operator >>(std::istream& is, User& u)
	{
		std::string line;
		getline(is, line);
		std::string aux;
		std::vector<std::string> data;
		std::stringstream check1(line);
		while (getline(check1, aux, ','))
			data.push_back(aux);
		if (line == "")
			return is;
		u.name = data[0];
		u.type = data[1];
		return is;
	}
};