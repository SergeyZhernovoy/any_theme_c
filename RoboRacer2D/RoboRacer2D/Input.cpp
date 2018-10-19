#include "stdafx.h"
#include "Input.h"

Input::Input(const HWND p_hwnd)
{
	m_command = Command::CM_STOP;
	m_hWnd = p_hwnd;
	m_uiElements = new Sprite*[10];
	m_uiCount = 0;
}

Input::~Input()
{
	delete[] m_uiElements;
}

void Input::Update(const float p_deltaTime)
{
	m_command = Command::CM_STOP;
	for (unsigned int i = 0; i < m_uiCount; i++)
	{
		Sprite* element = m_uiElements[i];
		if (element->IsActive() == true)
		{
			if (CheckForClick(element))
			{
				element->IsClicked(true);
				m_command = Input::Command::CM_UI;
				return;
			}
		}
	}
	
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

void Input::AddUiElement(Sprite* p_element)
{
	m_uiElements[m_uiCount++] = p_element;
}

const bool Input::CheckForClick(Sprite* p_element) const
{
	if (KEYDOWN(Key::K_LB))
	{
		POINT cursorPosition;
		GetCursorPos(&cursorPosition);
		ScreenToClient(m_hWnd, &cursorPosition);
		float left = p_element->GetPosition().x;
		float right = p_element->GetPosition().x + p_element->GetSize().width;

		float top = p_element->GetPosition().y;
		float bottom = p_element->GetPosition().y + p_element->GetSize().height;

		if (cursorPosition.x >= left && cursorPosition.x <= right && cursorPosition.y >= top && cursorPosition.y <= bottom)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

