#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 1920 , 1080, "best friends"}; // Простое окно

	Image ii{ Point{0, 0} , "best_friend1.jpg" }; // Файл 400х212 пикселей.
	win.attach(ii); // в формате jpg
	win.set_label("best friends");
	win.wait_for_button();

};