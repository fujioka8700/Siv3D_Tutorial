# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Texture emoji1{ U"🐈"_emoji };
	const Texture emoji2{ U"🍎"_emoji };

	while (System::Update())
	{
		const int32 cursorX = Cursor::Pos().x;

		emoji1.mirrored(false).drawAt(100, 100);
		emoji1.mirrored(true).drawAt(200, 100);

		emoji1.mirrored(400 <= cursorX).drawAt(400, 300);
	}
}
