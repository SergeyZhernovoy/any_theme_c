#include "stdafx.h"
#include "Input.h"

Input::Input(const HWND p_hwnd)
{
	m_command = Command::CM_STOP;
	m_hWnd = p_hwnd;
}

Input::~Input()
{
	
}

void Input::Update(const float p_deltaTime)
{
	m_command = Command::CM_STOP;
	if (KEYDOWN(Key::K_LEFT) || KEYDOWN(Key::K_A))
	{
		m_command = Command::CM_LEFT;
	}
	if (KEYDOWN(Key::K_RIGHT) || KEYDOWN(Key::K_D))
	{
		m_command = Command::CM_RIGHT;
	}
	if (KEYDOWN(Key::K_UP) || KEYDOWN(Key::K_LB))
	{
		m_command = Command::CM_UP;
	}
	if (KEYDOWN(Key::K_DOWN) || KEYDOWN(Key::K_RB))
	{
		m_command = Command::CM_DOWN;
	}
	if (KEYDOWN(Key::K_ESC) || KEYDOWN(Key::K_Q))
	{
		m_command = Command::CM_QUIT;
	}
}
