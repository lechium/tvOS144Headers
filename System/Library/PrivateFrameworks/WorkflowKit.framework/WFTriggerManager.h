/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFDatabase;

@interface WFTriggerManager : NSObject {

	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;              //@synthesize database=_database - In the implementation block
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(id)allConfiguredTriggers;
-(void)saveNewConfiguredTrigger:(id)arg1 workflow:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateConfiguredTrigger:(id)arg1 triggerID:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 notifyDaemon:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)configuredTriggerWithID:(id)arg1 ;
@end

