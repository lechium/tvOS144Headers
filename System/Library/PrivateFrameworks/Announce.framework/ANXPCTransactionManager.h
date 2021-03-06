/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ANXPCTransactionManager : NSObject {

	NSMutableDictionary* _activeTransactions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMutableDictionary * activeTransactions;              //@synthesize activeTransactions=_activeTransactions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_removeTransaction:(id)arg1 ;
-(NSMutableDictionary *)activeTransactions;
-(void)_transaction:(id)arg1 setActive:(BOOL)arg2 ;
-(void)_transaction:(id)arg1 setActiveForTimeInterval:(double)arg2 ;
-(id)_createTransaction:(id)arg1 ;
-(void)_resetTimer:(id)arg1 expiration:(double)arg2 ;
-(void)_createTransaction:(id)arg1 expiration:(double)arg2 ;
-(void)_startTimer:(id)arg1 expiration:(double)arg2 ;
-(void)_cancelTimer:(id)arg1 ;
-(void)transaction:(id)arg1 setActive:(BOOL)arg2 ;
-(void)transaction:(id)arg1 setActiveForTimeInterval:(double)arg2 ;
@end

