#include "ExamenOOP.h"
#include <QtWidgets/QApplication>
#include "Controller.h"
#include "Test.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	vector<User> ru;
	vector<Issue> ri;
	Test t;
	t.testAll();
	Repo r{ ru, ri };
	Controller c{ r };
	c.readfromfile();
	c.readfromfile2();
	//for (int i = 0; i < c.getRepo().getRu().size(); i++)
	//{
	ExamenOOP w{ c };
	string s = c.getRepo().getRu()[0].getName() + " " + c.getRepo().getRu()[0].getType();
	//string s = "Imre prog ";
	QString title = QString::fromStdString(s);
	w.setWindowTitle(title);
	//windo.push_back(&w);
	w.show();
	//}
	//for (int i = 0; i < windo.size(); i++)
	//	windo[i].show();
	return a.exec();

}
