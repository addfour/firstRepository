#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);


	//将class分支中的版本2合并到新建分支master，形成合并后的版本1
	//新建分支master
	QPushButton *btn = new QPushButton("新建分支master");

	//class分支中版本2
	QPushButton *btn = new QPushButton("class分支中版本2");

	btn->show();

	return app.exec();
}

