#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

class HelloWorld : public cocos2d::Layer
{
	cocos2d::TMXTiledMap * _tileMap;
	cocos2d::TMXLayer * _collidable;//一个图层
	cocos2d::Sprite * _player;
	//cocos2d::Sprite * _blueDef;
	//cocos2d::Sprite * _blueBigDef;
	//cocos2d::Sprite * _redDef;
	//cocos2d::Sprite * _redBigDef;
	//cocos2d::Sprite * _blueCrystal;
	//cocos2d::Sprite * _redCrystal;
public:
    static cocos2d::Scene* createScene();
	
	virtual void onEnter();
    virtual bool init();
	void setPlayerPosition(cocos2d::Vec2 position);
	cocos2d::Vec2 tileCoordFromPosition(cocos2d::Vec2 position);
	virtual bool isKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode);
	virtual void keyPressedDuration(cocos2d::EventKeyboard::KeyCode code);//大佬说 不用virtual 报错了再改吧
	
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
	void update(float delta) override;
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
private:
	std::map<cocos2d::EventKeyboard::KeyCode, bool> keys;
};

#endif // __HELLOWORLD_SCENE_H__
