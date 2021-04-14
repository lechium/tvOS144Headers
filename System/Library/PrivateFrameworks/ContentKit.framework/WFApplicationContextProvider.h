/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFApplicationContextProvider <NSObject>
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@optional
-(long long)userInterfaceStyle;
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1;
-(BOOL)wfIdleTimerDisabled;
-(void)setWfIdleTimerDisabled:(BOOL)arg1;

@required
-(id)bundleForWFApplicationContext:(id)arg1;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
-(id)keyWindowForWFApplicationContext:(id)arg1;
-(id)applicationForWFApplicationContext:(id)arg1;
-(BOOL)shouldReverseLayoutDirection;

@end

