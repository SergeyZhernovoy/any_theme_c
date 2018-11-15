#include "stdafx.h"
#include "Sprite.h"
#include "SOIL.h"

Sprite::Sprite(const uint numberTextures)
{
	textures = new GLuint[numberTextures];
	textureIndex = 0;
	currentFrame = 0;
	numberFrames =0;
	animationDelay = 0.25f;
	animationElapsed = 0.0f;
	m_position.x = 0.0f;
	m_position.y = 0.0f;
	size.height = 0.0f;
	size.width = 0.0f;
	velocity = 0.0f;
	isCollideable = true;
	flipHorizontal = false;
	flipVertical = false;
	isVisible = false;
	isActive = false;
	useTransparency = false;
	isSpiritSheet = false;
	m_isClicked = false;
	m_collision.left = 0.0f;
	m_collision.right = 0.0f;
	m_collision.top = 0.0f;
	m_collision.bottom = 0.0f;
}

Sprite::~Sprite()
{
	delete[] textures;
}

const bool Sprite::AddTexture(const char* p_imageName, const bool p_useTransparency)
{
	GLuint texture = SOIL_load_OGL_texture(p_imageName, SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, 0);
	if (texture == 0)
	{
		return false;
	}

	textures[textureIndex] = texture;
	textureIndex++;
	if (textureIndex == 1 && numberFrames > 1)
	{
		isSpiritSheet = true;
	}
	else
	{
		isSpiritSheet = false;
	}
	useTransparency = p_useTransparency;
	return true;
}

const Sprite::Rect Sprite::GetCollisionRect() const
{
	Rect rect;
	rect.left = m_position.x + m_collision.left;
	rect.right = m_position.x + size.width + m_collision.right;
	rect.top = m_position.y + m_collision.top;
	rect.bottom = m_position.y + size.height + m_collision.bottom;
	return rect;
}

void Sprite::Render()
{
	if (isVisible)
	{
		if (useTransparency)
		{
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		}
		glBindTexture(GL_TEXTURE_2D, GetCurrentFrame());
		glBegin(GL_QUADS);
		GLfloat x = m_position.x;
		GLfloat y = m_position.y;

		GLfloat w = size.width;
		GLfloat h = size.height;

		GLfloat texWidth = (GLfloat)textureIndex / (GLfloat)numberFrames;
		GLfloat texHeight = 1.0f;
		GLfloat u = 0.0f;
		GLfloat v = 0.0f;
		if (textureIndex < numberFrames)
		{
			u = (GLfloat)currentFrame * texWidth;
		}
		glTexCoord2f(u, v);	glVertex2f(x, y);
		glTexCoord2f(u + texWidth, v);	glVertex2f(x+ w, y);
		glTexCoord2f(u + texWidth, v + texHeight);	glVertex2f(x + w, y + h);
		glTexCoord2f(u, v + texHeight);	glVertex2f(x, y + h);
		glEnd();
		if (useTransparency)
		{
			glDisable(GL_BLEND);
		}
	}
}

void Sprite::Update(const float delta)
{
	float dt = delta;
	if (isActive)
	{
		animationElapsed += dt;
		if (animationElapsed >= animationDelay)
		{
			currentFrame++;
			if (currentFrame >= numberFrames)
			{
				currentFrame = 0;
			}
			animationElapsed = 0.0f;
		}
		m_position.x += velocity * dt;
	}
}

void Sprite::Jump(SpriteState p_state)
{
	if (p_state == SpriteState::DOWN)
	{
		if (m_position.y < 470.0f)
			m_position.y += 75.0f;
	}
	else if (p_state == SpriteState::UP)
	{
		if (m_position.y >= 470.0f) m_position.y -= 75.0f;
	}

}


