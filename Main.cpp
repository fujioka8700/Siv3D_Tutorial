# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		const double w = (Scene::Time() * 20.0);

		RectF{ 20, 40, w, 100 }.draw();
	}
}
