# include <Siv3D.hpp>

void Main()
{
	Window::Resize(300, 200);

	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Texture emoji1{ U"🐈"_emoji };

	while (System::Update())
	{
		static int32 i = 0;
		i++;

		for (int32 x = 0; x < 10; ++x)
		{
			Rect{ (x * 30), 0, 30, 600 }.draw(HSV{ (x * 36) + i, 0.5, 1.0 });
		}

		emoji1.rotated((i * 2) * (Math::Pi / 180)).drawAt(150, 100);
	}
}
