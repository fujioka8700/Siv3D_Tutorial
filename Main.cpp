# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Circle{ 400, 300, 200}.draw();

		Circle{ 200, 300, 200 }.draw(ColorF{ 1.0, 0.0, 0.0, 0.9 });

		Circle{ 600, 300, 200 }.draw(HSV{ 240.0, 0.5, 1.0, 0.2 });

		Circle{ Cursor::Pos(), 100 }.draw(ColorF{ 0.0, 0.5 });
	}
}
