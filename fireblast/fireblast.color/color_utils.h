#pragma once
class ColorUtils
{
public:
	ColorUtils(void);
	virtual ~ColorUtils(void);

	virtual int convertHSVToARGBPackedInt(float hue, float saturation, float value);

	virtual Color* convertHSVToColor(float pHue, float pSaturation, float pValue) = 0;

	virtual Color* convertARGBPackedIntToColor(int pARGBPackedInt) = 0;

	virtual Color* convertABGRPackedIntToColor(int pABGRPackedInt) = 0;

	virtual int convertRGBAToARGBPackedInt(float pRed, float pGreen, float pBlue, float pAlpha) = 0;

	virtual float convertRGBAToARGBPackedFloat(float pRed, float pGreen, float pBlue, float pAlpha) = 0;

	virtual int convertRGBAToABGRPackedInt(float pRed, float pGreen, float pBlue, float pAlpha) = 0;

	virtual float convertRGBAToABGRPackedFloat(float pRed, float pGreen, float pBlue, float pAlpha) = 0;

	virtual float convertPackedIntToPackedFloat(int pPackedInt) = 0;

	virtual float extractRedFromABGRPackedInt(int pABGRPackedInt) = 0;

	virtual float extractGreenFromABGRPackedInt(int pABGRPackedInt) = 0;

	virtual float extractBlueFromABGRPackedInt(int pABGRPackedInt) = 0;

	virtual float extractAlphaFromABGRPackedInt(int pABGRPackedInt) = 0;

	virtual float extractBlueFromARGBPackedInt(int pARGBPackedInt) = 0;

	virtual float extractGreenFromARGBPackedInt(int pARGBPackedInt) = 0;

	virtual float extractRedFromARGBPackedInt(int pARGBPackedInt) = 0;

	virtual float extractAlphaFromARGBPackedInt(int pARGBPackedInt) = 0;
};

