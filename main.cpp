#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	//class分支中版本2
	QPushButton *btn = new QPushButton("class分支中版本2");

	btn->show();

	return app.exec();
}

