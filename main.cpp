#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//分支master2
	QPushButton *btn = new QPushButton("分支master2");

	btn->show();

	return app.exec();
}

