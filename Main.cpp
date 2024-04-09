# include <Siv3D.hpp>

void Main()
{
	bool   a = false;
	int32  b = 123;
	double c = 0.5;
	size_t d = 100;

	Print << U"a:" << a;
	Print << U"b:" << b;
	Print << U"c:" << c;
	Print << U"d:" << d;

	while (System::Update())
	{
		
	}
}
