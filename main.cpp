#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//�汾2
	QPushButton *btn = new QPushButton("�汾2");

	btn->show();

	return app.exec();
}

