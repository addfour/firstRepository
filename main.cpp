#include<QtGui/QApplication>
#include<QtGui/QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);


          //fork project
	//ͨ��������url clone�����������Ķ�дȨ��

	//class��֧��Զ�̷������Ͽ�¡�����ĺϲ��汾�ͷ������汾2�ϲ�

	//��Զ�̷������Ͽ�¡�����ĺϲ��汾
	//�����޸��γɰ汾2���ϴ�����������
	//��class��֧�еİ汾2�ϲ����½���֧master���γɺϲ����İ汾1

	//�½���֧master
	QPushButton *btn = new QPushButton("�½���֧master");

	//class��֧�а汾2
	QPushButton *btn = new QPushButton("class��֧�а汾2");

	btn->show();

	return app.exec();
}

