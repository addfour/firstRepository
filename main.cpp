#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//class��֧�а汾1
	QPushButton *btn = new QPushButton("class��֧�а汾1");

	btn->show();

	return app.exec();
}

