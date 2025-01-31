#pragma once

#include "LiveActor/PartsModel.h"
#include "LiveActor/State/ActorStateParamScale.h"

class JumpEmitter : public LiveActor
{
public:
	JumpEmitter(const char *pName);

	virtual ~JumpEmitter();
	virtual void init(const JMapInfoIter &rIter);
	virtual void movement();
	virtual void kill();
	virtual void control();

	void startEventCamera();
	void updateEventCamera();
	void endEventCamera();
	void updateRotate();

	Mtx* mJointMtx; // _90
	Mtx mHeadMtx; // _94
	PartsModel* mHead;
	ActorStateParamScale* mParamScale; // _C8
	TVec3f _CC;
	bool mUpdateEventCamera; // _D8
	u32* mActorCameraInfo; // _DC
	u32* mMultiEventCamera; // _E0
};

namespace MR
{
	bool enableGroupAttack(LiveActor *pActor, f32, f32);
};
