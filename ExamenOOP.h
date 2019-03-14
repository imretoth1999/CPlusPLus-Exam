#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ExamenOOP.h"
#include "Controller.h"
class ExamenOOP : public QMainWindow
{
	Q_OBJECT

public:
	ExamenOOP(Controller &c,QWidget *parent = Q_NULLPTR);

private:
	Controller c;
	Ui::ExamenOOPClass ui;
	void showMain();
	void connect();
private slots:
	void deleteIssue()
	{
		if (c.getRepo().getRi()[ui.mainThing->currentRow()].getStatus() == "open")
			return;
		this->c.getRepo().removeIssue(ui.mainThing->currentRow());
		this->showMain();

	}
	void addIsue()
	{
		QString s = ui.des->text();
		string s1 = s.toStdString();
		Issue u{ s1,"open","Imre","No solver yet" };
		this->c.getRepo().addIssue(u);
		this->showMain();

	}
	void solveIsue()
	{
		int  i = ui.mainThing->currentRow();
		if (c.getRepo().getRi()[ui.mainThing->currentRow()].getStatus() == "closed")
			return;
		this->c.getRepo().updateIssue(ui.mainThing->currentRow(), "closed", "Imre");
		this->showMain();

	}
};
