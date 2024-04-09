# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		int32 fps = Profiler::FPS();

		Window::SetTitle(fps);
	}
}
