# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		const double hue = (Scene::Time() * 60.0);

		Scene::SetBackground(HSV{ hue });
	}
}
