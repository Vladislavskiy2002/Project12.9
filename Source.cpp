#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // ����������� ��������
	Point t1{ 0 , 0 }; // ������ ����� ������� ���� ����
	Simple_window win{ t1 , 1920 , 1080, "best friends"}; // ������� ����

	Image ii{ Point{0, 0} , "best_friend1.jpg" }; // ���� 400�212 ��������.
	win.attach(ii); // � ������� jpg
	win.set_label("best friends");
	win.wait_for_button();

};