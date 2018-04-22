#include "Dardulator.h"

Dardulator::Dardulator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QPushButton* btnNums[] = {ui.btn1, ui.btn2, ui.btn3, ui.btn4, ui.btn5, ui.btn6, ui.btn7, ui.btn8, ui.btn9 };
	QPushButton* btnOps[] = { ui.btnPlus, ui.btnMinus, ui.btnMultiply, ui.btnDivide, ui.btnPower };

	for (int i = 0; i < 9; ++i) {
		QObject::connect(
			btnNums[i], &QPushButton::clicked,
			[=]() { this->on_numbers_clicked(QString::number(i + 1)); }
		);
	}
	for (int i = 0; i < 5; ++i) {
		QObject::connect(
			btnOps[i], &QPushButton::clicked,
			[=]() { this->on_operator_clicked(btnOps[i]->text()); }
		);
	}


}

bool errorOccured = false;
bool hasDecimal = false;
double operand1 = 0, operand2 = 0;
QString currOperator = "";
bool _clearOnInput = false;
bool Dardulator::clearOnInput() {
	return _clearOnInput;
}
void Dardulator::setClearOnInput(bool val) {
	_clearOnInput = val;
	if (val) {
		ui.lblOperator->setStyleSheet("QLabel { color : blue; }");
		ui.lblOperator->setText(currOperator);
	}
	else {
		ui.lblOperator->setStyleSheet("QLabel { color : gray; }");
		ui.lblOperator->setText("O");
	}
}

void Dardulator::on_btn0_clicked() {
	if (errorOccured) {
		QApplication::beep();
		return;
	}
	else {
		if (clearOnInput()) {
			ui.txtDisplay->setText("0");
			setClearOnInput(false);
		}
		else {
			if (ui.txtDisplay->text() != "0")
				appendText("0");
		}
	}
}
void Dardulator::on_numbers_clicked(QString digit) {
	if (errorOccured) {
		QApplication::beep();
		return;
	}
	else {
		if (clearOnInput() || ui.txtDisplay->text() == "0") {
			ui.txtDisplay->setText(digit);
			setClearOnInput(false);
		}
		else {
			if (ui.txtDisplay->text() != "0")
				appendText(digit);
		}
	}
}
void Dardulator::on_operator_clicked(QString op) {
	if (errorOccured) {
		QApplication::beep();
		return;
	}
	if (currOperator != "")
		calculateTotal(false);
	
	operand1 = ui.txtDisplay->text().toDouble();
	currOperator = op;
	setClearOnInput(true);
	hasDecimal = false;
}
void Dardulator::on_btnEqual_clicked() {
	if (errorOccured) {
		QApplication::beep();
		return;
	}
	if (operand1 != 0) {
		calculateTotal(true);
		hasDecimal = false;
	}
}
void Dardulator::calculateTotal(bool equals) {
	if (!equals && clearOnInput()) return;
	if (!clearOnInput()) {
		operand2 = ui.txtDisplay->text().toDouble();
	}
	if (currOperator == ui.btnPlus->text())
		operand1 += operand2;
	else if (currOperator == ui.btnMinus->text())
		operand1 -= operand2;
	else if (currOperator == ui.btnMultiply->text())
		operand1 *= operand2;
	else if (currOperator == ui.btnDivide->text())
		operand1 /= operand2;
	else if (currOperator == ui.btnPower->text())
		operand1 = pow(operand1, operand2);
	
	if (!isinf(operand1)) {
		ui.txtDisplay->setText(QString::number(operand1));
		setClearOnInput(true);
	}
	else {
		performError("Result Overflow");
	}
	
}

void Dardulator::performError(QString msg) {
	if (msg == "") {
		errorOccured = false;
		ui.lblError->setStyleSheet("QLabel { color : gray; }");
	}
	else {
		ui.txtDisplay->setText(msg);
		errorOccured = true;
		ui.lblError->setStyleSheet("QLabel { color : red; }");
	}
	
}
void Dardulator::on_btnDot_clicked() {
	if (errorOccured) {
		QApplication::beep();
		return;
	}
	else {
		if (!hasDecimal) {
			if (clearOnInput() || ui.txtDisplay->text() == "0") {
				ui.txtDisplay->setText("0.");
			}
			else {
				appendText(".");
			}
			hasDecimal = true;
		}
	}
}

void Dardulator::on_btnCE_clicked() {
	if (errorOccured) {
		QApplication::beep();
		return;
	}
	
	ui.txtDisplay->setText("0");
	hasDecimal = false;
}
void Dardulator::on_btnC_clicked() {
	ui.txtDisplay->setText("0");
	hasDecimal = false;
	operand1 = operand2 = 0;
	currOperator = "";
	setClearOnInput(false);
	performError("");

}

void Dardulator::appendText(QString text) {
	ui.txtDisplay->setText(ui.txtDisplay->text() + text);
}