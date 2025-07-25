#pragma once

#define MAX_SETTINGS_STRING	0x7F

struct stSettings
{
	// client
	char szNickName[24+1];
    int iServerID;
	char szPassword[MAX_SETTINGS_STRING+1];

	// debug
	bool bDebug;
	bool bOnline;

	// gui
	char szFont[40];
	float fFontSize;
	int iFontOutline;
	float fChatPosX;
	float fChatPosY;
	float fChatSizeX;
	float fChatSizeY;
	int iChatMaxMessages;
	float fSpawnScreenPosX;
	float fSpawnScreenPosY;
	float fSpawnScreenSizeX;
	float fSpawnScreenSizeY;
	float fHealthBarWidth;
	float fHealthBarHeight;
	float fScoreBoardSizeX;
	float fScoreBoardSizeY;
	bool bPassengerUseTexture;
	float fPassengerTextureSize;
	float fPassengerTextureX;
	float fPassengerTextureY;
	bool bVoiceChatEnable;
	int iVoiceChatKey;
	float fVoiceChatSize;
	float fVoiceChatPosX;
	float fVoiceChatPosY;

	bool iAndroidKeyboard;
	bool iCutout;
	bool iFPSCounter;
	bool iHPArmourText;
	bool iOutfitGuns;
	bool iPCMoney;
	bool iRadarRect;
	bool iSkyBox;
	bool iSnow;
	bool iFirstPerson;
    bool iHud;
	int iFPSCount;

	bool iDialog;
};

class CSettings
{
public:
	CSettings();
	~CSettings();

	stSettings& Get() { return m_Settings; }

    const stSettings& GetReadOnly();
    stSettings& GetWrite();
	
private:
	struct stSettings m_Settings;
};
