#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//°æ±¾3
	QPushButton *btn = new QPushButton("°æ±¾3");

	btn->show();

	return app.exec();
}

