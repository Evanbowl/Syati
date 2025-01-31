#pragma once

#include "AreaObj/ImageEffectArea.h"

class PostOutlineArea : public ImageEffectArea
{
public:
	PostOutlineArea(const char *pName);

	virtual ~PostOutlineArea();
	virtual void init(const JMapInfoIter &rIter);
	virtual const char* getManagerName() const;

	s32 getIntensity() const;
};
