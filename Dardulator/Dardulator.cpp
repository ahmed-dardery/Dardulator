#include "Dardulator.h"

Dardulator::Dardulator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btn1, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn2, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn3, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn4, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn5, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn6, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn7, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn8, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));
	connect(ui.btn9, SIGNAL(clicked()), this, SLOT(on_numbers_clicked()));

}

bool errorOccured = false;
bool operandReady = false;
bool hasDecimal = false;
void Dardulator::on_btn0_clicked() {
	if (errorOccured) {
		//alert the user, somehow
		return;
	}
	else {
		if (operandReady) {
			ui.txtDisplay->setText("0");
		}
		else {
			if (ui.txtDisplay->text() != "0")
				appendText("0");
		}
	}
}
void Dardulator::on_numbers_clicked() {
	if (errorOccured) {
		//alert the user, somehow
		return;
	}
	else {
		QPushButton *btnNum = qobject_cast<QPushButton*>(sender());
		QString digit = btnNum->text();
		if (operandReady) {
			ui.txtDisplay->setText(digit);
		}
		else {
			if (ui.txtDisplay->text() != "0")
				appendText(digit);
		}
	}
}

void Dardulator::on_btnDot_clicked() {
	if (errorOccured) {
		//alert the user, somehow
		return;
	}
	else {
		if (!hasDecimal) {
			if (operandReady) {
				ui.txtDisplay->setText("0.");
			}
			else {
				appendText(".");
			}
		}
	}
}

void Dardulator::appendText(QString text) {
	ui.txtDisplay->setText(ui.txtDisplay->text() + text);
}