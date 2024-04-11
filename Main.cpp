# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Circle{ Cursor::Pos(), 100}.draw();
	}
}
