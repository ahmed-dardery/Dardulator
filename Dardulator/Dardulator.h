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
	void on_numbers_clicked(QString);
	void on_operator_clicked(QString);

	void on_btnEqual_clicked();

	void calculateTotal(bool x);
	
	void performError(QString msg);

	void on_btnDot_clicked();
	
	void on_btnC_clicked();
	void on_btnCE_clicked();

	void appendText(QString text);
	
private:
	bool clearOnInput();
	void setClearOnInput(bool);
	Ui::DardulatorClass ui;
};
