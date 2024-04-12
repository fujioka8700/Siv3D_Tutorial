# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Rect{ 20, 40, 400, 100 }.draw();

		Rect{ 100, 200, 80 }.draw(Palette::Orange);
	}
}
