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
	position.x = 0.0f;
	position.y = 0.0f;
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
		GLfloat x = position.x;
		GLfloat y = position.y;

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
		glTexCoord2f(u, v);
		glVertex2f(x, y);
		glTexCoord2f(u + texWidth, v);
		glVertex2f(x+ w, y);
		glTexCoord2f(u + texWidth, v + texHeight);
		glVertex2f(x + w, y + h);
		glTexCoord2f(u, v + texHeight);
		glVertex2f(x, y + h);
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
		position.x += velocity * dt;
	}
}