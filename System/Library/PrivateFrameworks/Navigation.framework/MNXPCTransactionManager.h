/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject, NSHashTable;

@interface MNXPCTransactionManager : NSObject {

	NSObject*<OS_os_transaction> _xpcTransaction;
	NSHashTable* _requesters;

}
+(id)sharedInstance;
-(void)addHighMemoryThresholdRequest:(id)arg1 ;
-(void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2 ;
@end

