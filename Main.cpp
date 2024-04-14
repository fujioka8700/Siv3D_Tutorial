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
				Circle{ (x * 100), (y * 100), 30 }.draw(Palette::Skyblue);
			}				
		}
	}
}
