#include "ExamenOOP.h"
#include "Controller.h"
ExamenOOP::ExamenOOP(Controller &c,QWidget *parent)
	:c(c), QMainWindow(parent)
{
	ui.setupUi(this);
	this->showMain();
	this->connect();
}

void ExamenOOP::showMain()
{
	if (ui.mainThing->count() > 0)
		ui.mainThing->clear();
	c.sortSD();
	for (auto s : c.getRepo().getRi())
	{
		string a = s.getDescription();
		string b = s.getStatus();
		string c = s.getReporter();
		string d = s.getSolver();
		ui.mainThing->addItem(QString::fromStdString(a + " | " + b + " | " + c + " | " + d));
	}
	c.sortSD();
}
void ExamenOOP::connect()
{
	QObject::connect(ui.sterge, SIGNAL(released()), this, SLOT(deleteIssue()));
	QObject::connect(ui.add, SIGNAL(released()), this, SLOT(addIsue()));
	QObject::connect(ui.update, SIGNAL(released()), this, SLOT(solveIsue()));


}

