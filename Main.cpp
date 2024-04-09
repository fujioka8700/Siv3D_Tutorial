# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Print << Scene::Time();

		// 実行時間が 3 秒以上経過したら
		if (3.0 <= Scene::Time())
		{
			return;
		}

		// 処理A();
	}

	// 処理B();
} // ここで Main() が終了
