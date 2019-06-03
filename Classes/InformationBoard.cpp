#include "GameScene.h"

void GameScene::initInformationBoard()
{
	// 宝石背景版
	auto bottomBackground = Sprite::create(theme->gameSceneBottomBackground);
	bottomBackground->setPosition(Point(793, 419));
	this->addChild(bottomBackground, -1);

	// 主背景版
	auto topBackground = Sprite::create(theme->gameSceneTopBackground);
	topBackground->setPosition(Point(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2));
	this->addChild(topBackground, 10);

	// 设置按钮
	auto settingButton = SettingButton::create();
	settingButton->setPosition(Point(1050, 850));
	this->addChild(settingButton, 11);

	// 返回按钮
	auto backButton = ui::Button::create(
		BackButton::BACK_BUTTON_NORMAL_IMAGE,
		BackButton::BACK_BUTTON_SELECTED_IMAGE,
		BackButton::BACK_BUTTON_DISABLED_IMAGE);
	backButton->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			const auto dialog = Dialog::create(theme->gameSceneDialogBackground, Size(640, 480));
			dialog->setContentText("您确定要退出当前游戏么？这将丢失当前游戏进度！", 36, 60, 20);

			dialog->addButton(MenuItemSprite::create(
				Sprite::create(theme->gameSceneYesButtonNormal),
				Sprite::create(theme->gameSceneYesButtonSelected),
				Sprite::create(theme->gameSceneYesButtonNormal),
				[&](Ref* sender)
				{
					Director::getInstance()->popScene();
				}));
			dialog->addButton(MenuItemSprite::create(
				Sprite::create(theme->gameSceneNoButtonNormal),
				Sprite::create(theme->gameSceneNoButtonSelected),
				Sprite::create(theme->gameSceneNoButtonNormal),
				[&, dialog](Ref* sender)
				{
					Director::getInstance()->getRunningScene()->removeChild(dialog);
				}));

			this->addChild(dialog, 30);
		}
	});
	backButton->setPosition(Point(1150, 850));
	this->addChild(backButton, 11);

	// 步数背景
	auto stepBackground = Sprite::create(theme->gameSceneLevelSpriteBackground);
	stepBackground->setScale(1.5);
	stepBackground->setPosition(225, 630);
	this->addChild(stepBackground, 11);

	// 步数Label
	stepNumberLabel = Label::createWithTTF(to_string(stepNumber), theme->markerFeltFont, 48);
	stepNumberLabel->enableGlow(Color4B::YELLOW);
	stepNumberLabel->setPosition(225, 625);
	this->addChild(stepNumberLabel, 12);

	// 积分条背景
	auto processBar = Sprite::create(theme->gameSceneGreyProcessBar);
	processBar->setPosition(Point(225, 410));
	this->addChild(processBar, 11);

	// 积分条前景，设置竖排
	currentProgressBar = Sprite::create(theme->gameSceneProcessBar);
	progressController = ProgressTimer::create(currentProgressBar);
	progressController->setPosition(Point(225, 410));
	progressController->setType(ProgressTimer::Type::BAR);
	progressController->setBarChangeRate(Point(0, 1));
	progressController->setMidpoint(Point(0, 0));
	progressController->setPercentage(0);
	this->addChild(progressController, 12);

	// 分数板
	scoreLabel = Label::createWithTTF("0", theme->markerFeltFont, 32);
	scoreLabel->setPosition(225, 240);
	this->addChild(scoreLabel, 11);

	// 提示次数
	hintNumberSprite = Sprite::create(theme->gameSceneHintNumber + to_string(hintNumber) + ".png");
	hintNumberSprite->setPosition(340, 520);
	this->addChild(hintNumberSprite, 12);

	// 提示按钮
	auto hintButton = Button::create(theme->gameSceneHintButtonNormal,
	                                 theme->gameSceneHintButtonSelected,
	                                 theme->gameSceneHintButtonDisabled);
	hintButton->setPosition(Point(375, 540));
	hintButton->addTouchEventListener([&](Ref* sender, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			if (hintNumber > 0)
			{
				hintNumber--;
				hintNumberSprite->setTexture(theme->gameSceneHintNumber + to_string(hintNumber) + ".png");
			}
		}
	});
	this->addChild(hintButton, 11);
}

void GameScene::setTotalScore(const int totalScore)
{
	this->totalScore = totalScore;
}

void GameScene::setStepNumber(const int stepNumber)
{
	if (stepNumber >= 0)
	{
		this->stepNumber = stepNumber;
		stepNumberLabel->setString(to_string(stepNumber));
	}
}

void GameScene::setCurrentScore(int score)
{
	const auto previousPercentage = 100.0f * currentScore / totalScore;

	if (score < 0) score = 0;
	if (score > totalScore) score = totalScore;

	currentScore = score;
	scoreLabel->setString(to_string(currentScore));

	const auto processAction = ProgressFromTo::create(0.25, previousPercentage, 100.0f * currentScore / totalScore);
	progressController->runAction(processAction);
}
