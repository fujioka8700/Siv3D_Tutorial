# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(ColorF{ 0.3, 0.6, 1.0 });

	while (System::Update())
	{
		Rect{ 0, 0, 600, 500 }
			.draw(Arg::top = ColorF{ 0.5, 0.7, 0.9 }, Arg::bottom = ColorF{ 0.5, 0.9, 0.7 });

		Rect{ 220, 100, 100, 30 }.drawFrame(3, 0);

		Rect{ 340, 100, 100, 30 }.drawFrame(0, 3);

		Rect{ 200, 200, 400, 100 }.drawFrame(3, 3, Palette::Orange);

		Circle{ Cursor::Pos(), 40 }.drawFrame(1, 1, Palette::Seagreen);
	}
}
