#include "Triangle.h"

// Constructor
Triangle::Triangle(int index) : Primitives(index) {
	mTexture[0] = new Texture("Tile3.png");
	mTexture[0]->Parent(this);
	mTexture[0]->Pos(VEC2_ZERO);

	mTexture[1] = new Texture("Tile3Selected.png");
	mTexture[1]->Parent(this);
	mTexture[1]->Pos(VEC2_ZERO);

	mTexture[2] = new Texture("Tile3Over.png");
	mTexture[2]->Parent(this);
	mTexture[2]->Pos(VEC2_ZERO);

	mTexture[3] = new Texture("TileExplosion1.png");
	mTexture[3]->Parent(this);
	mTexture[3]->Pos(VEC2_ZERO);

	mTexture[4] = new Texture("TileExplosion2.png");
	mTexture[4]->Parent(this);
	mTexture[4]->Pos(VEC2_ZERO);

	mTexture[5] = new Texture("TileExplosion3.png");
	mTexture[5]->Parent(this);
	mTexture[5]->Pos(VEC2_ZERO);

	mAnimatedTexture = new AnimatedTexture("TileExplosion.png", 0, 0, 115, 115, 3, 3.0f, AnimatedTexture::horizontal);
	mAnimatedTexture->Parent(this);
	mAnimatedTexture->Pos(VEC2_ZERO);
}

// Destructor
Triangle::~Triangle() {
}