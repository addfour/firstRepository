#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//�½���֧master
	QPushButton *btn = new QPushButton("�½���֧master");

	btn->show();

	return app.exec();
}

