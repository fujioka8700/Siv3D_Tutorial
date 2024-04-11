﻿# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Circle{ 100, 200, 40}.draw();
		Circle{ 200, 200, 40}.draw(Palette::Green);
		Circle{ 300, 200, 40}.draw(Palette::Skyblue);
		Circle{ 400, 200, 40 }.draw(ColorF{ 1.0, 0.8, 0.0 });
		Circle{ 500, 200, 40 }.draw(ColorF{ 0.8 });
		Circle{ 600, 200, 40 }.draw(HSV{ 160.0, 0.5, 1.0 });
		Circle{ 700, 200, 40 }.draw(HSV{ 160.0 });
	}
}
