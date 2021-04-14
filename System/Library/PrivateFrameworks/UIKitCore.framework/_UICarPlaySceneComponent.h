/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIScene, UICarPlayApplicationSceneSettings, NSString;

@interface _UICarPlaySceneComponent : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	UICarPlayApplicationSceneSettings* _carPlaySceneSettings;

}

@property (nonatomic,retain) UICarPlayApplicationSceneSettings * carPlaySceneSettings;              //@synthesize carPlaySceneSettings=_carPlaySceneSettings - In the implementation block
@property (nonatomic,readonly) BOOL disableFiveRowKeyboards; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;               //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(id)initWithScene:(id)arg1 ;
-(void)_setScene:(id)arg1 ;
-(BOOL)disableFiveRowKeyboards;
-(UICarPlayApplicationSceneSettings *)carPlaySceneSettings;
-(void)setCarPlaySceneSettings:(UICarPlayApplicationSceneSettings *)arg1 ;
@end
