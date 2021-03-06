/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@protocol WFUserInterfaceHost;
@class WFDatabase;

@interface WFWorkflowRealmSyncManager : NSObject <WFApplicationStateObserver> {

	id<WFUserInterfaceHost> _userInterface;
	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) id<WFUserInterfaceHost> userInterface;              //@synthesize userInterface=_userInterface - In the implementation block
+(id)defaultManager;
+(void)setDefaultManager:(id)arg1 ;
-(void)dealloc;
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(id<WFUserInterfaceHost>)userInterface;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)setUserInterface:(id<WFUserInterfaceHost>)arg1 ;
-(void)presentResumeSyncConfirmationAlertWithContinueSyncingBlock:(/*^block*/id)arg1 cancelSyncingBlock:(/*^block*/id)arg2 ;
-(void)handleZoneWasPurgedError;
@end

