/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HBUILaunchAnimationContext : NSObject {

	BOOL _launchApplicationAnimation;
	BOOL _resignApplicationAnimation;
	BOOL _launchScreenSaverAnimation;
	BOOL _resignScreenSaverAnimation;
	NSString* _applicationBundleIdentifier;

}

@property (getter=isLaunchApplicationAnimation,nonatomic,readonly) BOOL launchApplicationAnimation;              //@synthesize launchApplicationAnimation=_launchApplicationAnimation - In the implementation block
@property (getter=isResignApplicationAnimation,nonatomic,readonly) BOOL resignApplicationAnimation;              //@synthesize resignApplicationAnimation=_resignApplicationAnimation - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;                                           //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (getter=isLaunchScreenSaverAnimation,nonatomic,readonly) BOOL launchScreenSaverAnimation;              //@synthesize launchScreenSaverAnimation=_launchScreenSaverAnimation - In the implementation block
@property (getter=isResignScreenSaverAnimation,nonatomic,readonly) BOOL resignScreenSaverAnimation;              //@synthesize resignScreenSaverAnimation=_resignScreenSaverAnimation - In the implementation block
+(id)applicationAnimationContextWithApplicationBundleIdentifier:(id)arg1 animationDirection:(long long)arg2 ;
+(id)screenSaverAnimationContextWithAnimationDirection:(long long)arg1 ;
-(id)debugDescription;
-(id)_init;
-(NSString *)applicationBundleIdentifier;
-(BOOL)isLaunchApplicationAnimation;
-(BOOL)isResignApplicationAnimation;
-(BOOL)isLaunchScreenSaverAnimation;
-(BOOL)isResignScreenSaverAnimation;
@end

