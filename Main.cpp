# include <Siv3D.hpp>

void Main()
{
	Array<int32> a = {10, 20, 50, 100};
	Optional<double> b;

	Print << U"a:" << a;
	Print << U"b:" << b;

	b = 12.3;

	Print << U"b:" << b;

	b = none;

	Print << U"b:" << b;

	while (System::Update())
	{
		
	}
}
