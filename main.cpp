#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//��֧master2
	QPushButton *btn = new QPushButton("��֧master2");

	btn->show();

	return app.exec();
}

