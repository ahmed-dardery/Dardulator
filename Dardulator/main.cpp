#include "Dardulator.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Dardulator w;
	w.show();
	return a.exec();
}
