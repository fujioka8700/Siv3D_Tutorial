# include <Siv3D.hpp>

void Main()
{
	bool   a = false;
	int32  b = 123;
	double c = 0.5;
	size_t d = 100;
	char32 e = U'A';
	String f = U"Hello";
	FilePath g = U"example/windmill.png";

	Print << U"a:" << a;
	Print << U"b:" << b;
	Print << U"c:" << c;
	Print << U"d:" << d;
	Print << U"e:" << e;
	Print << U"f:" << f;
	Print << U"g:" << g;

	while (System::Update())
	{
		
	}
}
