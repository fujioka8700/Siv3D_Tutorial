# include <Siv3D.hpp>

void Main()
{
	ScreenCapture::SetShortcutKeys({ KeyA });

	// 画像ファイルから画像データを読み込んでテクスチャを作成する
	const Texture texture{ U"example/windmill.png" };

	while (System::Update())
	{
		// テクスチャを描画する
		texture.draw();
	}
}
