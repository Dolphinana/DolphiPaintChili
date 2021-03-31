/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/


// 2021-03-30: I managed to make pixel on mouse position, But i need to keep the pixel to the screen.
// I managed to keep pixel on screen temporarily, basically i made a drawing program :DD Though you can only put 10 pixels and those pixel will be gone when you put new pixels.


#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	++incrementPos;

	if (wnd.mouse.LeftIsPressed())
	{
		if (incrementPos == 1)
		{
			posX1 = wnd.mouse.GetPosX();
			posY1 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 2)
		{
			posX2 = wnd.mouse.GetPosX();
			posY2 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 3)
		{
			posX3 = wnd.mouse.GetPosX();
			posY3 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 4)
		{
			posX4 = wnd.mouse.GetPosX();
			posY4 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 5)
		{
			posX5 = wnd.mouse.GetPosX();
			posY5 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 6)
		{
			posX6 = wnd.mouse.GetPosX();
			posY6 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 7)
		{
			posX7 = wnd.mouse.GetPosX();
			posY7 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 8)
		{
			posX8 = wnd.mouse.GetPosX();
			posY8 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 9)
		{
			posX9 = wnd.mouse.GetPosX();
			posY9 = wnd.mouse.GetPosY();
		}
		if (incrementPos == 10)
		{
			posX10 = wnd.mouse.GetPosX();
			posY10 = wnd.mouse.GetPosY();
		}

	}

	if (incrementPos >= 10)
	{
		incrementPos = 0;
	}

}

void Game::ComposeFrame()
{

	gfx.PutPixel(posX1, posY1, 255, 255, 255);
	gfx.PutPixel(posX2, posY2, 255, 255, 255);
	gfx.PutPixel(posX3, posY3, 255, 255, 255);
	gfx.PutPixel(posX4, posY4, 255, 255, 255);
	gfx.PutPixel(posX5, posY5, 255, 255, 255);
	gfx.PutPixel(posX6, posY6, 255, 255, 255);
	gfx.PutPixel(posX7, posY7, 255, 255, 255);
	gfx.PutPixel(posX8, posY8, 255, 255, 255);
	gfx.PutPixel(posX9, posY9, 255, 255, 255);
	gfx.PutPixel(posX10, posY10, 255, 255, 255);
}
