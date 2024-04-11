# include <Siv3D.hpp>

struct X {
	X(int a) {
		Print << U"aaa" << a;
	}
};

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	X x1{0};

	while (System::Update())
	{

	}
}
