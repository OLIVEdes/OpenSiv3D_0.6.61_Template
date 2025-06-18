# include <Siv3D.hpp> // OpenSiv3D v0.6.6

void Main()
{
	Scene::SetBackground(ColorF(0.9, 0.9, 0.9));
	Window::SetToggleFullscreenEnabled(false);
	Window::Resize(1600, 900);
	Window::SetStyle(s3d::WindowStyle::Sizable);
	Window::SetTitle(U"");
	Scene::SetResizeMode(ResizeMode::Virtual);

	while (System::Update())
	{
		
	}
}
