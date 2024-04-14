# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::White);

	while (System::Update())
	{
		for (int32 x = 0; x < 10; x++)
		{
			Rect{ (x * 80), 0, 80, 600 }.draw(HSV{ (x * 36), 0.5, 1.0 });
		}
	}
}
