# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Texture emoji1{ U"🐈"_emoji };
	const Texture emoji2{ U"🍎"_emoji };

	while (System::Update())
	{
		emoji1.drawAt(100, 100);
		emoji2.drawAt(200, 300);
		emoji1.drawAt(400, 300);
		emoji2.drawAt(Cursor::Pos());
	}
}
