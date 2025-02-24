#pragma once
#include "olcPixelGameEngine.h"

class Entity {
   public:
	olc::vf2d position;
	olc::vf2d scale;

   private:
	const char *imageFile = nullptr;
	olc::Sprite sprite;
	olc::Decal decal;

   public:
	Entity(const char *p_imageFile);
	~Entity() = default;

	float getWidth() const;
	float getHeight() const;

	void draw(olc::PixelGameEngine *game);

   private:
};
