# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(ColorF{ 0.3, 0.6, 1.0 });

	while (System::Update())
	{
		Rect{ 0, 0, 600, 500 }
			.draw(Arg::left = ColorF{ 0.5, 0.7, 0.9 }, Arg::right = ColorF{ 0.5, 0.9, 0.7 });
	}
}
