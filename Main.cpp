# include <Siv3D.hpp>

void Main()
{
	ScreenCapture::SetShortcutKeys({ KeyA });

	LicenseManager::AddLicense({
		.title = U"My game",
		.copyright = U"(C) 2023 My name",
		.text = U"License" });

	System::SetTerminationTriggers(UserAction::CloseButtonClicked);

	// 画像ファイルから画像データを読み込んでテクスチャを作成する
	const Texture texture{ U"example/windmill.png" };

	while (System::Update())
	{
		// テクスチャを描画する
		texture.draw();
	}
}
