#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
class Issue {
private:
	string description;
	string status;
	string reporter;
	string solver;
public:
	Issue(string a, string b, string c, string d)
	{
		this->description = a;
		this->status = b;
		this->reporter = c;
		this->solver = d;
	}
	string& getDescription() { return this->description; }
	string& getStatus() { return this->status; }
	string& getReporter() { return this->reporter; }
	string& getSolver() { return this->solver; }
	friend istream& operator >>(istream& is, Issue& u)
	{
		string line;
		getline(is, line);
		string aux;
		vector<string> data;
		stringstream check1(line);
		while (getline(check1, aux, ','))
			data.push_back(aux);
		if (line == "")
			return is;
		u.description = data[0];
		u.status = data[1];
		u.reporter = data[2];
		u.solver = data[3];
		return is;
	}
};