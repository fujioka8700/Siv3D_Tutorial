# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	const Texture emoji1{ U"🐈"_emoji };
	const Texture emoji2{ U"🍎"_emoji };

	while (System::Update())
	{
		static int32 i = 0;

		emoji1.scaled(0.6).rotated(10_deg).drawAt(100, 100);
		emoji2.scaled(0.3).rotated(270_deg).drawAt(200, 300);
		emoji1.rotated(i * (Math::Pi / 180)).drawAt(400, 300);
		emoji2.drawAt(Cursor::Pos());

		i+=2;
	}
}
