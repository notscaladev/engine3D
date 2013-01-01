#include "stdafx.h"
#include "color.h"
#define ABGR_PACKED_RED_SHIFT  0;
#define ABGR_PACKED_GREEN_SHIFT  8;
#define ABGR_PACKED_BLUE_SHIFT  16;
#define ABGR_PACKED_ALPHA_SHIFT  24;
#define ABGR_PACKED_RED_CLEAR  0XFFFFFF00;
#define ABGR_PACKED_GREEN_CLEAR  0XFFFF00FF;
#define ABGR_PACKED_BLUE_CLEAR  0XFF00FFFF;
#define ABGR_PACKED_ALPHA_CLEAR  0X00FFFFFF;
#define ARGB_PACKED_BLUE_SHIFT  0;
#define ARGB_PACKED_GREEN_SHIFT  8;
#define ARGB_PACKED_RED_SHIFT  16;
#define ARGB_PACKED_ALPHA_SHIFT  24;
#define ARGB_PACKED_BLUE_CLEAR  0XFFFFFF00;
#define ARGB_PACKED_GREEN_CLEAR  0XFFFF00FF;
#define ARGB_PACKED_RED_CLEAR  0XFF00FFFF;
#define ARGB_PACKED_ALPHA_CLEAR  0X00FFFFFF;

class CColor : public Color
{
private:
	float m_red;
	float m_green;
	float m_blue;
	float m_alpha;
	int m_ABGRPackedInt;
	float m_ABGRPackedFloat;
public:
	CColor::CColor(void){}

	CColor::CColor(float red, float green, float blue)
	{
		
	}

	CColor::CColor(float pRed, float pGreen, float pBlue, float pAlpha)
	{
	}

    CColor::~CColor(void){}

	float Color::getRedColor()
	{
		return this->m_red;
	}

	float Color::getGreenColor()
	{
		return this->m_green;
	}

	float Color::getBlueColor()
	{
		return this->m_blue;
	}

	float Color::getAlphaColor()
	{
		return this->m_alpha;
	}
};
