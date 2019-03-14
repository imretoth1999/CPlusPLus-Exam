#pragma once
#include "Issue.h"
#include "User.h"
using namespace std;
class Repo {
private:
	vector<User> ru;
	vector<Issue> ri;
public:
	Repo(vector<User> &a, vector<Issue> &b)
	{
		this->ru = a;
		this->ri = b;
	}
	vector<User> &getRu() { return this->ru; }
	vector<Issue>& getRi() { return this->ri; }
	void addIssue(Issue u) 
	{
		/*
		INPUT: The Issue u
		OUTPUT: We add the issue to the vector if its valid
		RESTRICTIONS: The description must not be empty and it must be unique
		*/
		if (u.getDescription() == "")
			return;
		for (int i = 0; i < this->ri.size(); i++)
			if (ri[i].getDescription() == u.getDescription())
				return;
		this->ri.push_back(u);
	}
	void removeIssue(int pos)
	{
		/*
		INPUT:the position we want to delet
		OUTPUT: we delete the position if it exists
		RESTRICTION: The position must be valid
	 */
		if (pos < 0 || pos >= this->ri.size())
			return;
		this->ri.erase(this->ri.begin() + pos);
	}
	void updateIssue(int pos,string status,string programmer)
	{
		/*
		INPUT: The status we want to be updated, the programmer and the position
		OUTPUT: If the position is valid,we update 
		RESTRICTIONS: the status and programmer must not be empyt and the pos must be valid
		*/
		if (pos < 0 || pos >= this->ri.size())
			return;
		if (status == "" || programmer == "")
			return;
		this->ri[pos].getStatus() = status;
		this->ri[pos].getSolver() = programmer;
	}
};