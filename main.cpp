#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//�汾4
	QPushButton *btn = new QPushButton("�汾4");

	btn->show();

	return app.exec();
}

