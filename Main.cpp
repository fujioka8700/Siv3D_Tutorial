# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::White);

	while (System::Update())
	{
		for (int32 y = 0; y < 5; y++)
		{
			for (int32 x = 0; x < 6; x++)
			{
				if ((x + y) % 2 == 0)
				{
					Circle{ (x * 100), (y * 100), 10 }.draw(Palette::Skyblue);
				}
				else
				{
					Circle{ (x * 100), (y * 100), 30 }.draw(Palette::Skyblue);
				}
			}				
		}
	}
}
