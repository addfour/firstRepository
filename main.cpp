#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//°æ±¾4
	QPushButton *btn = new QPushButton("°æ±¾4");

	btn->show();

	return app.exec();
}

