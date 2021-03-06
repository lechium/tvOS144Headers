/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@protocol OS_dispatch_queue, MFCancelable;
@class NSObject, NSCountedSet, CDSession, NSString;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _powerQueue;
	int _pluggedIn;
	int _powerToken;
	NSCountedSet* _identifiers;
	id<MFCancelable> _appStateCancelable;
	BOOL _isForeground;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;
	CDSession* _duetSession;

}

@property (getter=isPluggedIn,readonly) BOOL pluggedIn; 
@property (getter=isBatterySaverModeEnabled,readonly) BOOL batterySaverModeEnabled; 
@property (getter=isHoldingAssertion,readonly) BOOL holdingAssertion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)powerlog:(id)arg1 eventData:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)duetIdentifier;
-(BOOL)isPluggedIn;
-(id)copyDiagnosticInformation;
-(void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2 ;
-(void)releaseAssertionWithIdentifier:(id)arg1 ;
-(id)powerObservable;
-(BOOL)isBatterySaverModeEnabled;
-(void)retainAssertionWithIdentifier:(id)arg1 ;
-(void)_initDuet;
-(void)_setPluggedIn:(unsigned)arg1 ;
-(void)_applicationForegroundStateChanged:(BOOL)arg1 ;
-(void)_releaseAssertion_nts;
-(void)_retainAssertion_nts;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(double)_assertionTimeout;
-(void)_setupAssertionTimer:(double)arg1 ;
-(id)_duetAttributeForAccountWithUniqueId:(id)arg1 discretionary:(BOOL)arg2 ;
-(void)_deleteDuetAttributesForAccountWithUniqueId:(id)arg1 ;
-(BOOL)_createBudgetWithName:(id)arg1 parentBudgetName:(id)arg2 attribute:(id)arg3 error:(id*)arg4 ;
-(BOOL)_deleteBudgetWithName:(id)arg1 ;
-(BOOL)isHoldingAssertion;
-(void)startListeningForBatterySaverNotifications;
-(void)recordDuetEventForAccount:(id)arg1 event:(id)arg2 ;
@end

