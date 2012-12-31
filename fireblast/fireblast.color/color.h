#pragma once
class Color
{
public:
	Color(void);
	virtual ~Color(void);

	Color(Color* color);

	Color(float red, float green, float blue);

	Color(float pRed, float pGreen, float pBlue, float pAlpha);

	virtual float getRedColor() = 0;

	virtual float getGreenColor() = 0;
	
	virtual float getBlueColor() = 0;

	virtual float getAlphaColor() = 0;

	virtual void setRedColor(float red) = 0;

	virtual bool isRedColor(float red) = 0;

	virtual void setGreenColor(float green) = 0;

	virtual bool isGreenColor(float green) = 0;

	virtual void setBlueColor(float blue) = 0;

	virtual bool isBlueColor(float blue) = 0;

	virtual void setAlphaColor(float alpha) = 0;

	virtual bool isAlphaColor(float alpha) = 0;

	virtual void setColor(float red, float green, float blue) = 0;

	virtual bool isColor(float red, float green, float blue) = 0;

	virtual void setColor(float red, float green, float blue, float alpha) = 0;

	virtual bool isColor(float red, float green, float blue, float alpha) = 0;

	virtual void setColor(Color* color) = 0;

	virtual bool isColor(Color* color) = 0;

	virtual int getABGRPackedInt() = 0;

	virtual float getABGRPackedFloat() = 0;

	virtual int getARGBPackedInt() = 0;

	virtual void reset() = 0;

	virtual void packABGRRed() = 0;

	virtual void packABGRGreen() = 0;

	virtual void packABGRBlue() = 0;

	virtual void packABGRAlpha() = 0;

	virtual void packABGR() = 0;

	virtual void mix(Color* pColorA, float pPercentageA, Color* pColorB, float pPercentageB) = 0;

};

