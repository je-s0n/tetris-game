#pragma once
#include "value.h"
class CStage
{
private:
	CStage();
	~CStage();

private:
	friend class CStageManager;

private:
	char m_Stage[STAGE_HEIGHT][STAGE_WIDTH];
	int m_iSpeed; // 스피드 값

public:
	long score = 0; // 점수 값

public:
	int GetSpeed() const
	{
		return m_iSpeed;
	}

	void SetSpeed(int iSpeed)
	{
		m_iSpeed = iSpeed;
	}

public:
	void AddBlock(class CShape* pShape, const POSITION& tPos);
	bool CheckBlock(int x, int y);

public:
	bool Init();
	void Render();
};

