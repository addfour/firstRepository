#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//class分支中版本1
	QPushButton *btn = new QPushButton("class分支中版本1");

	btn->show();

	return app.exec();
}

