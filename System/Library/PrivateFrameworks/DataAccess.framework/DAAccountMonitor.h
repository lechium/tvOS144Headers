/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface DAAccountMonitor : NSObject {

	NSHashTable* _accounts;
	NSObject*<OS_dispatch_queue> _accountsQueue;

}

@property (nonatomic,retain) NSHashTable * accounts;                                  //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountsQueue;              //@synthesize accountsQueue=_accountsQueue - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(id)monitoredAccounts;
-(NSHashTable *)accounts;
-(void)setAccounts:(NSHashTable *)arg1 ;
-(void)unmonitorAccount:(id)arg1 ;
-(void)monitorAccount:(id)arg1 ;
-(void)setAccountsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accountsQueue;
@end

