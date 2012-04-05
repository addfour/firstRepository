#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//°æ±¾1
	QPushButton *btn = new QPushButton("°æ±¾1");

	btn->show();

	return app.exec();
}

