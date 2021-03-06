#ifndef __THEME_H__
#define __THEME_H__

#include <string>

using std::string;

class Theme
{
public:
#pragma region Theme Name
	const string jetBrainThemeName = "JetBrainTheme";
	const string adobeThemeName = "AdobeTheme";
	// const string officeThemeName = "OfficeTheme";
#pragma endregion

#pragma region Font TTF
	const string markerFeltFont = "/font/marker_felt.ttf";
	const string semiBoldFont = "/font/semi_bold.ttf";
#pragma endregion

#pragma region Music
	string backgroundMusic;
#pragma endregion

#pragma region Common
	string iconSet;
#pragma endregion

#pragma region Particle
	string particlePath;
#pragma endregion 

#pragma region Back Button
	const string backButtonNormal = "/image/common/back_normal.png";
	const string backButtonSelected = "/image/common/back_selected.png";
	const string backButtonDisabled = "/image/common/back_disabled.png";
#pragma endregion

#pragma region Dialog
	string messageDialogBackground;
	string resultDialogBackground;

#pragma endregion

#pragma region Loading Sence
	string loadingSceneBackground;

	const string loadingSceneLabelPress = "/image/loadingscene/common/label_press.png";
	const string loadingSceneLabelTitle = "/image/loadingscene/common/label_title.png";

#pragma endregion

#pragma region Menu Sence
	string menuSceneBackground;
	string menuSceneClassicLabel;
	string menuSceneClassicPlate;
	string menuSceneEnhancedLabel;
	string menuSceneEnhancedPlate;
	string menuSceneRankListBackground;
	string menuSceneDrawOnMeLabel;

	const string menuChangeTypeButtonNormalBackground = "/image/menuscene/common/change_button_normal.png";
	const string menuChangeTypeButtonSelectedBackground = "/image/menuscene/common/change_button_selected.png";
	const string menuChangeTypeButtonDisabledBackground = "/image/menuscene/common/change_button_disabled.png";

	const string menuBackTypeButtonNormalBackground = "/image/menuscene/common/back_change_button_normal.png";
	const string menuBackTypeButtonSelectedBackground = "/image/menuscene/common/back_change_button_selected.png";
	const string menuBackTypeButtonDisabledBackground = "/image/menuscene/common/back_change_button_disabled.png";

	const string menuSceneLevelButtonNormal = "/image/menuscene/common/level_normal.png";
	const string menuSceneLevelButtonSelected = "/image/menuscene/common/level_selected.png";
	const string menuSceneLevelButtonDisabled = "/image/menuscene/common/level_disabled.png";

	const string menuScenePracticeButtonNormal = "/image/menuscene/common/practice_normal.png";
	const string menuScenePracticeButtonSelected = "/image/menuscene/common/practice_selected.png";
	const string menuScenePracticeButtonDisabled = "/image/menuscene/common/practice_disabled.png";

	const string menuSceneChallengeButtonNormal = "/image/menuscene/common/challenge_normal.png";
	const string menuSceneChallengeButtonSelected = "/image/menuscene/common/challenge_selected.png";
	const string menuSceneChallengeButtonDisabled = "/image/menuscene/common/challenge_disabled.png";

	const string menuSceneRankButtonNormal = "/image/menuscene/common/rank_normal.png";
	const string menuSceneRankButtonSelected = "/image/menuscene/common/rank_selected.png";
	const string menuSceneRankButtonDisabled = "/image/menuscene/common/rank_disabled.png";

	const string menuSceneStoreButtonNormal = "/image/menuscene/common/buy_car_normal.png";
	const string menuSceneStoreButtonSelected = "/image/menuscene/common/buy_car_selected.png";
	const string menuSceneStoreButtonDisabled = "/image/menuscene/common/buy_car_disabled.png";

	const string menuSceneNewsBoardIcon = "/image/menuscene/common/icon.png";
	const string menuSceneUserIcon = "/image/menuscene/common/user.png";
	const string menuSceneEditIcon = "/image/menuscene/common/edit.png";

#pragma endregion

#pragma region Level Scene
	string levelSelectButton;
	string levelSceneDistantView;
	string levelSceneForeground;

#pragma endregion

#pragma region Store Scene

	string storeSceneJetBrainThemeIcon;
	string storeSceneAdobeThemeIcon;
	string storeSceneOfficeThemeIcon;
	string storeSceneStoreLabel;
	string storeSceneBackground;

	const string storeSceneCoin = "/image/storescene/common/coins.png";

	// 选择按钮
	const string storeSceneChoiceButtonNormal = "/image/storescene/common/choice_normal.png";
	const string storeSceneChoiceButtonSelected = "/image/storescene/common/choice_selected.png";
	const string storeSceneChoiceButtonDisabled = "/image/storescene/common/choice_disabled.png";

	// Adobe RMB 按钮
	const string storeSceneAdobeRmbButtonNormal = "/image/storescene/common/adobe_RMB_normal.png";
	const string storeSceneAdobeRmbButtonSelected = "/image/storescene/common/adobe_RMB_selected.png";
	const string storeSceneAdobeRmbButtonDisabled = "/image/storescene/common/adobe_RMB_disabled.png";

	// Office RMB 按钮
	const string storeSceneOfficeRmbButtonNormal = "/image/storescene/common/office_RMB_normal.png";
	const string storeSceneOfficeRmbButtonSelected = "/image/storescene/common/office_RMB_selected.png";
	const string storeSceneOfficeRmbButtonDisabled = "/image/storescene/common/office_RMB_disabled.png";

	// Adobe COINS 按钮
	const string storeSceneAdobeCoinsButtonNormal = "/image/storescene/common/adobe_coins_normal.png";
	const string storeSceneAdobeCoinsButtonSelected = "/image/storescene/common/adobe_coins_selected.png";
	const string storeSceneAdobeCoinsButtonDisabled = "/image/storescene/common/adobe_coins_disabled.png";

	// Office COINS 按钮
	const string storeSceneOfficeCoinsButtonNormal = "/image/storescene/common/office_coins_normal.png";
	const string storeSceneOfficeCoinsButtonSelected = "/image/storescene/common/office_coins_selected.png";
	const string storeSceneOfficeCoinsButtonDisabled = "/image/storescene/common/office_coins_disabled.png";

#pragma endregion

#pragma region Game Scene
	string gameSceneTopBackground;
	string gameSceneBottomBackground;
	string gameSceneStepSpriteBackground;
	string gameSceneInfStepSpriteBackground;
	string gameSceneHintButtonNormal;
	string gameSceneHintButtonSelected;
	string gameSceneHintButtonDisabled;
	string gameSceneResultSpriteBackground;

	const string gameSceneMouseMoveOn = "/image/gamescene/common/mouse_move_on.png";
	const string gameSceneMouseSelected = "/image/gamescene/common/mouse_selected.png";

	const string gameSceneGreyProcessBar = "/image/gamescene/common/process_bar.png";
	const string gameSceneProcessBar = "/image/gamescene/common/process_bar_score.png";
	const string gameSceneHintNumber = "/image/gamescene/common/hint";
	const string gameSceneResultSprite = "/image/gamescene/common/";
	const string gameSceneYesButtonNormal = "/image/gamescene/common/yes_normal.png";
	const string gameSceneYesButtonSelected = "/image/gamescene/common/yes_selected.png";
	const string gameSceneNoButtonNormal = "/image/gamescene/common/no_normal.png";
	const string gameSceneNoButtonSelected = "/image/gamescene/common/no_selected.png";

	const string gameSceneShareButtonNormal = "/image/gamescene/common/share_button_normal.png";
	const string gameSceneShareButtonSelected = "/image/gamescene/common/share_button_selected.png";
	const string gameSceneShareButtonDisabled = "/image/gamescene/common/share_button_disabled.png";

	const string gameSceneQQShareButtonNormal = "/image/gamescene/common/qq.png";
	const string gameSceneQQShareButtonSelected = "/image/gamescene/common/qq.png";
	const string gameSceneQQShareButtonDisabled = "/image/gamescene/common/qq.png";

	const string gameSceneWBShareButtonNormal = "/image/gamescene/common/weibo.png";
	const string gameSceneWBShareButtonSelected = "/image/gamescene/common/weibo.png";
	const string gameSceneWBShareButtonDisabled = "/image/gamescene/common/weibo.png";

	const string gameSceneRRShareButtonNormal = "/image/gamescene/common/renren.png";
	const string gameSceneRRShareButtonSelected = "/image/gamescene/common/renren.png";
	const string gameSceneRRShareButtonDisabled = "/image/gamescene/common/renren.png";

	const string gameSceneDBShareButtonNormal = "/image/gamescene/common/douban.png";
	const string gameSceneDBShareButtonSelected = "/image/gamescene/common/douban.png";
	const string gameSceneDBShareButtonDisabled = "/image/gamescene/common/douban.png";

#pragma endregion

	static Theme* getInstance();
	void setCurrentTheme(const string& theme);
	string getCurrentThemeName() const { return currentTheme; }

private:
	static Theme* instance;
	Theme();

	string currentTheme;
	void setJetBrainTheme();
	void setAdobeTheme();
	// void setOfficeTheme();
};

#endif
