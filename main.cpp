#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//�汾1
	QPushButton *btn = new QPushButton("�汾1");

	btn->show();

	return app.exec();
}

