#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);



	//class分支从远程服务器上克隆下来的合并版本和服务器版本2合并

	//从远程服务器上克隆下来的合并版本
	//简单修改形成版本2，上传到服务器上
	//将class分支中的版本2合并到新建分支master，形成合并后的版本1

	//新建分支master
	QPushButton *btn = new QPushButton("新建分支master");

	//class分支中版本2
	QPushButton *btn = new QPushButton("class分支中版本2");

	btn->show();

	return app.exec();
}

