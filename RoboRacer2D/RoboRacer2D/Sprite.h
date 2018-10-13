#pragma once
#include <gl\gl.h>
typedef unsigned int uint;
class Sprite
{
	
public:
	struct Point
	{
		GLfloat x;
		GLfloat y;
	};

	struct Size
	{
		GLfloat width;
		GLfloat height;
	};

	struct Rect
	{
		GLfloat top;
		GLfloat bottom;
		GLfloat left;
		GLfloat right;
	};

	enum SpriteState
	{
		UP, 
		DOWN
	};

protected:
	GLuint* textures;
	uint textureIndex;
	uint currentFrame;
	uint numberFrames;
	GLfloat animationDelay;
	GLfloat animationElapsed;
	Point position;
	Size size;
	GLfloat velocity;

	bool isCollideable;
	bool flipHorizontal;
	bool flipVertical;
	bool isVisible;
	bool isActive;
	bool useTransparency;
	bool isSpiritSheet;
	bool m_isClicked;

public:
	Sprite(const uint numberTextures);
	~Sprite();
	void Update(const float delta);
	void Jump(SpriteState p_state);
	void IsClicked(const bool p_value) { m_isClicked = p_value; }
	const bool IsClicked() const { return m_isClicked; }

	void Render();

	const bool AddTexture(const char* fileName, const bool useTransparancey = true);
	const GLuint GetCurrentFrame()
	{
		if (isSpiritSheet)
		{
			return textures[0];
		}
		else
		{
			return textures[currentFrame];
		}
	}
	void SetPosition(const GLfloat pX, const GLfloat pY)
	{
		position.x = pX;
		position.y = pY;
	}
	void SetPosition(const Point point)
	{
		position = point;
	}
	const Point GetPosition() { return position;}
	const Size GetSize() const { return size;}
	void SetFrameSize(const GLfloat pWidth, const GLfloat pHeght)
	{
		size.width = pWidth;
		size.height = pHeght;
	}
	void SetVelocity(const GLfloat pVelocity)
	{
		velocity = pVelocity;
	}
	void SetNumberFrames(const GLfloat pFrames)
	{
		numberFrames = pFrames;
	}
	const bool IsCollideable() const { return isCollideable; }
	void IsCollideable(const bool value) 
	{
		isCollideable = value;
	}
	void FlipHorizontal(const bool value)
	{
		flipHorizontal = value;
	}
	void FlipVertical(const bool value)
	{
		flipVertical = value;
	}
	const bool IsVisible() const { return isVisible; }
	void IsVisible(const bool value)
	{
		isVisible = value;
	}
	const bool IsActive() const { return isActive; }
	void IsActive(const bool value)
	{
		isActive = value;
	}
	void UseTransparency(const bool value) { useTransparency = value;}
};
