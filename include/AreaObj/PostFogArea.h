#pragma once

#include "AreaObj/ImageEffectArea.h"

class PostFogArea : public ImageEffectArea
{
public:
	PostFogArea(const char *pName);

	virtual ~PostFogArea();
	virtual void init(const JMapInfoIter &rIter);
	virtual const char* getManagerName() const;

	s32 getMinRange() const;
	s32 getMaxRange() const;
	s32 getAlpha() const;
	s32 getRed() const;
	s32 getGreen() const;
	s32 getBlue() const;
	s32 getGradType() const;
};
