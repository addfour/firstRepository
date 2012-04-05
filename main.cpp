#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//°æ±¾2
	QPushButton *btn = new QPushButton("°æ±¾2");

	btn->show();

	return app.exec();
}

