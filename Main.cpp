# include <Siv3D.hpp>

void Main()
{
	Print << U"こんにちは";

	int32 count = 0;

	while (System::Update())
	{
		ClearPrint();

		Print << count;

		count++;
	}
}
