#pragma once

#include "AreaObj/AreaObj.h"

class CubeCameraArea : public AreaObj
{
public:
	CubeCameraArea(const char *pName);

	virtual ~CubeCameraArea();
	virtual void init(const JMapInfoIter &rIter);
	virtual void movement();
	virtual bool isInVolume(const TVec3f &mTranslation) const;
	virtual s32 getAreaPriority() const;
	virtual const char* getManagerName() const;
	virtual s32 getCategoryArg() const;

	bool isValidCameeraID() const;
	u16 getCameraID() const;
	void setCurrentCategory(s32 category);

	u16 mCameraId;
	s32 mZoneId;
};

class CubeCameraMgr : public AreaObjMgr
{
public:
	CubeCameraMgr(s32 size, const char *pName);

	virtual ~CubeCameraMgr();

	void initAfterLoad();
};
