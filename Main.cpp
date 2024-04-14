# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::White);

	while (System::Update())
	{
		for (int32 x = 0; x < 6; x++)
		{
			Rect{ (x * 100), 0, 80, 600 }.draw(ColorF{ 0.0, (x * 0.2), 1.0 });
		}
	}
}
