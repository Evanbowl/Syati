#include "syati.h"
#include "JGeometry/TVec3.h"

class LiveActor;
class RailRider;

namespace MR
{
	void moveTransToOtherActorRailPos(LiveActor *, const LiveActor *);
	void moveTransToCurrentRailPos(LiveActor *);

	void moveCoord(LiveActor *, f32);
	void moveCoordAndTransToRailPoint(LiveActor *, s32);
	void moveCoordAndCheckPassPointNo(LiveActor *, f32);

	void moveCoordAndFollowTransAndCheckPassPointNo(LiveActor *);
	void moveCoordToRailPoint(LiveActor *, s32);
	void moveCoordToNearestPos(LiveActor *, const TVec3f &);
	void moveCoordAndFollowTrans(LiveActor *, f32);
	void moveCoordAndFollowTrans(LiveActor *);

	void moveCoordToStartPos(LiveActor *);
	void moveCoordAndTransToStartPos(LiveActor *);
	void moveCoordToEndPos(LiveActor *);
	void moveRailToNextPoint(LiveActor *);
	void moveCoordAndTransToNearestRailPos(LiveActor *);
	void moveCoordAndTransToNearestRailPos(LiveActor *, const TVec3f &);
	void moveCoordAndTransToNearestRailPoint(LiveActor *);
	void moveCoordAndTransToNextPoint(LiveActor *);
	void moveCoordAndTransToRailStartPoint(LiveActor *);

	void setRailDirectionToStart(LiveActor *);
	void setRailDirectionToEnd(LiveActor *);
	void setRailDirectionCloseToCoord(LiveActor *, f32);
	void setRailDirectionCloseToNearestPos(LiveActor *, const TVec3f &);
	void reverseRailDirection(LiveActor *);
	void calcMovingDirectionAlongRail(LiveActor *, TVec3f *, const TVec3f &, f32, bool, bool *);
	void calcMovingDirectionAlongRailH(LiveActor *, TVec3f *, const TVec3f &, f32, bool *);
	void calcRailClippingInfo(TVec3f *, f32 *, const LiveActor *, f32, f32);
	void initAndSetRailClipping(TVec3f *, LiveActor *, f32, f32);
	void calcNearestRailCoord(const LiveActor *, const TVec3f &);
	void calcNearestRailPos(TVec3f *, const LiveActor *, const TVec3f &);
	void calcNearestRailDirection(TVec3f *, const LiveActor *, const TVec3f &);
	void calcNearestRailPosAndDirection(TVec3f *, TVec3f *, const LiveActor *, const TVec3f &);

	// void calcBoundingBox(RailRider *, TBox3f *, f32);
	// void calcBoundingBox(const LiveActor *, TBox3f *, f32);

	void calcDifferenceRailCoord(const LiveActor *, f32, f32);
	void calcDifferenceRailCoord(const LiveActor *, f32);
	void calcDistanceHorizonToCurrentPos(const LiveActor *);
	void calcRailPosAtCoord(TVec3f *, const LiveActor *, f32);
	void calcRailPosFrontCoord(TVec3f *, const LiveActor *, f32);

	void calcRailDirectionAtCoord(TVec3f *, const LiveActor *, f32);

	void calcRailPosAndDirectionAtCoord(TVec3f *, TVec3f *, const LiveActor *, f32);
	void calcRailStartPos(TVec3f *, const LiveActor *);
	void calcRailEndPos(TVec3f *, const LiveActor *);
	void calcRailPointPos(TVec3f *, const LiveActor *, int);
	void calcRailRandomPointPos(TVec3f *, const LiveActor *, int);
	void calcRailStartPointPos(TVec3f *, const LiveActor *);
	void calcRailEndPointPos(TVec3f *, const LiveActor *);

	void calcRailStartPointPosAndDirection(TVec3f *, TVec3f *, const LiveActor *);
	void calcRailEndPointPosAndDirection(TVec3f *, TVec3f *, const LiveActor *);
	void calcDistanceToNextRailPoint(const LiveActor *, f32 *);
	void calcDistanceToCurrentAndNextRailPoint(const LiveActor *, f32 *, f32 *);

	bool isExistRail(const LiveActor *);
	s32 getRailPointNum(const LiveActor *);
	s32 getCurrentRailPointNo(const LiveActor *);
	s32 getNextRailPointNo(const LiveActor *);
	f32 getRailTotalLength(const LiveActor *);
	f32 getRailPartLength(const LiveActor *, int);
	f32 getRailPointCoord(const LiveActor *, int);
	TVec3f* getRailPos(const LiveActor *);
	TVec3f* getRailPointPosStart(const LiveActor *);
	TVec3f* getRailPointPosEnd(const LiveActor *);
	TVec3f* getRailDirection(const LiveActor *);
	f32 getRailCoord(const LiveActor *);
	f32 getRailCoordSpeed(const LiveActor *);
	void setRailCoord(LiveActor *, f32);
	void setRailCoordSpeed(LiveActor *, f32);
	void accelerateRailCoordSpeed(LiveActor *, f32);
	void adjustmentRailCoordSpeed(LiveActor *, f32, f32);
	void slowDownRailCoordSpeed(LiveActor *, f32);
	void moveRailRider(LiveActor *);
	bool isLoopRail(const LiveActor *);
	bool isRailReachedGoal(const LiveActor *);
	bool isRailReachedNearGoal(const LiveActor *, f32);
	bool isRailReachedEdge(const LiveActor *);
	bool isRailGoingToEnd(const LiveActor *);
	bool isRailReachedNearNextPoint(const LiveActor *, f32);
	bool isRailReachedHorizonCurrentPos(const LiveActor *, f32);
	bool getRailArg0WithInit(const LiveActor *, s32 *);
	bool getRailArg7WithInit(const LiveActor *, s32 *);
	bool getRailArg0NoInit(const LiveActor *, s32 *);
	bool getRailArg1NoInit(const LiveActor *, s32 *);
	bool getRailArg3NoInit(const LiveActor *, s32 *);
	bool getRailArg1WithInit(const RailRider *, s32 *);
	bool getRailPointArg0WithInit(const LiveActor *, s32, s32 *);
	bool getRailPointArg2WithInit(const LiveActor *, s32, s32 *);
	bool getRailPointArg0NoInit(const LiveActor *, s32, s32 *);
	bool getRailPointArg4NoInit(const LiveActor *, s32, s32 *);
	bool getRailPointArg6NoInit(const LiveActor *, s32, s32 *);
	bool getRailPointArg7NoInit(const LiveActor *, s32, s32 *);
	bool getRailPointArg1NoInit(const LiveActor *, s32, f32 *);
	bool getCurrentRailPointArg0WithInit(const LiveActor *, s32 *);
	bool getCurrentRailPointArg1WithInit(const LiveActor *, s32 *);
	bool getCurrentRailPointArg3WithInit(const LiveActor *, s32 *);
	bool getCurrentRailPointArg0NoInit(const LiveActor *, s32 *);
	bool getCurrentRailPointArg1NoInit(const LiveActor *, s32 *);
	bool getCurrentRailPointArg5NoInit(const LiveActor *, s32 *);
	bool getCurrentRailPointArg7NoInit(const LiveActor *, s32 *);
	bool getCurrentRailPointArg0NoInit(const LiveActor *, f32 *);
	bool getCurrentRailPointArg1NoInit(const LiveActor *, f32 *);
	bool getCurrentRailPointArg2NoInit(const LiveActor *, f32 *);
	bool getCurrentRailPointArg3NoInit(const LiveActor *, f32 *);
	bool getCurrentRailPointArg6NoInit(const LiveActor *, f32 *);
	bool getCurrentRailPointArg7NoInit(const LiveActor *, f32 *);
	bool getCurrentRailPointArg1NoInit(const LiveActor *, bool *);
	bool getCurrentRailPointArg4NoInit(const LiveActor *, bool *);
	bool getNextRailPointArg0WithInit(const LiveActor *, s32 *);
	bool getNextRailPointArg0NoInit(const LiveActor *, f32 *);
	bool getNextRailPointArg1NoInit(const LiveActor *, f32 *);
	bool getNextRailPointArg2NoInit(const LiveActor *, f32 *);
	bool getNextRailPointArg3NoInit(const LiveActor *, f32 *);
	bool getNextRailPointArg6NoInit(const LiveActor *, f32 *);
	bool getNextRailPointArg7NoInit(const LiveActor *, f32 *);
	bool getNextRailPointArg2WithInit(const LiveActor *, bool *);
};