/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PBSDisplayStateObserver.h>

@class NSMapTable, NSString;

@interface AVSharedDisplayManager : NSObject <PBSDisplayStateObserver> {

	int _pbDisplayModeSwitchActiveNotification;
	unsigned _numberOfDisplayModeSwitchesInProgress;
	long long _displayCriteriaMatchingEnabledValue;
	NSMapTable* _activeScenesDisplayCriteria;
	BOOL _displayModeSwitchInProgress;

}

@property (assign,setter=_setDisplayModeSwitchInProgress:,getter=isDisplayModeSwitchInProgress,nonatomic) BOOL displayModeSwitchInProgress;              //@synthesize displayModeSwitchInProgress=_displayModeSwitchInProgress - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayCriteriaMatchingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id)init;
-(void)dealloc;
-(id)initPrivate;
-(void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2 ;
-(id)preferredDisplayCriteriaForScene:(id)arg1 ;
-(void)setPreferredDisplayCriteria:(id)arg1 forScene:(id)arg2 ;
-(void)considerDisplayModeSwitchFinished;
-(BOOL)isDisplayCriteriaMatchingEnabled;
-(BOOL)isDisplayModeSwitchInProgress;
-(void)_setDisplayModeSwitchInProgress:(BOOL)arg1 ;
@end

