/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, CKServerChangeToken;

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	CKServerChangeToken* _serverChangeToken;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
-(HMDBackingStoreCacheGroup *)record;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

