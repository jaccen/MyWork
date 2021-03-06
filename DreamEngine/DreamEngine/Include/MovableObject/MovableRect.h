#pragma once
#include "MovableObject/MovableObject.h"
#include "HardwareBuffer.h"

namespace DreamEngine
{

class _EngineExport CTestMovable  : public CMovableObject
{
public:
	CTestMovable(CRenderSystem* pRenderSystem, const CString& name);
	~CTestMovable(void);

	virtual void onCreate();
	virtual void onLostDevice();
	virtual void onResetDevice();

protected:

};
}


