/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIScene, UISceneSession;

@interface _UISceneUnassociatedContext : NSObject {

	UIScene* _scene;
	UISceneSession* _session;

}

@property (nonatomic,retain) UIScene * scene;                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) UISceneSession * session;              //@synthesize session=_session - In the implementation block
-(UISceneSession *)session;
-(void)setSession:(UISceneSession *)arg1 ;
-(UIScene *)scene;
-(void)setScene:(UIScene *)arg1 ;
@end
