#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Dardulator.h"

class Dardulator : public QMainWindow
{
	Q_OBJECT

public:
	Dardulator(QWidget *parent = Q_NULLPTR);

private slots:
	void on_btn0_clicked();
	void on_numbers_clicked();
	void on_btnDot_clicked();


private:
	Ui::DardulatorClass ui;
	void appendText(QString text);
};
