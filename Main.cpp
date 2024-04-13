# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Rect{ 100, 100, 100, 30 }.draw();

		Rect{ 220, 100, 100, 30 }.drawFrame(3, 0);

		Rect{ 340, 100, 100, 30 }.drawFrame(0, 3);

		Rect{ 200, 200, 400, 100 }.drawFrame(3, 3, Palette::Orange);

		Circle{ Cursor::Pos(), 40 }.drawFrame(1, 1, Palette::Seagreen);
	}
}
