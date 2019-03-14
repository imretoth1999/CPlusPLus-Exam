#pragma once
#include "Repo.h"
class Controller {
private:
	Repo r;
public:
	Controller(Repo& r) :r{ r } {}
	Repo& getRepo() { return this->r; }
	void sortSD() {
		for(int i = 0;i<r.getRi().size() - 1;i++)
			for(int j = i+1;j<r.getRi().size();j++)
				if (r.getRi()[i].getStatus() > r.getRi()[j].getStatus())
				{
					Issue aux{ "a","a","a","a" };
					aux = r.getRi()[i];
					r.getRi()[i] = r.getRi()[j];
					r.getRi()[j] = aux;
				}
		for (int i = 0; i<r.getRi().size() - 1; i++)
			for (int j = i + 1; j<r.getRi().size(); j++)
				if (r.getRi()[i].getStatus() == r.getRi()[j].getStatus() && r.getRi()[i].getDescription() > r.getRi()[j].getDescription())
				{
					Issue aux{ "a","a","a","a" };
					aux = r.getRi()[i];
					r.getRi()[i] = r.getRi()[j];
					r.getRi()[j] = aux;
				}
	}
	void readfromfile() {
		fstream file("users.txt");
		User aux{ "a","a"};
		while (file >> aux)
			r.getRu().push_back(aux);
		file.close();
	}
	void readfromfile2() {
		fstream file("issues.txt");
		Issue aux{ "a","a","a","a" };
		while (file >> aux)
			r.getRi().push_back(aux);
		file.close();
	}
	void writeTofile()
	{
		fstream file("Issues.txt");
		for (int i = 0; i < this->getRepo().getRi().size(); i++)
			file << this->getRepo().getRi()[i].getDescription() << "," << this->getRepo().getRi()[i].getStatus() << "," << this->getRepo().getRi()[i].getReporter() << "," << this->getRepo().getRi()[i].getSolver() << endl;
	}

};