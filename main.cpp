#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//新建分支master
	QPushButton *btn = new QPushButton("新建分支master");

	btn->show();

	return app.exec();
}

