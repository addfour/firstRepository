#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//�汾3
	QPushButton *btn = new QPushButton("�汾3");

	btn->show();

	return app.exec();
}

