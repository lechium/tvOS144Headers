/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject {

	os_unfair_lock_s _lock;
	BOOL _itemFetched;
	id _item;
	NSMutableArray* _deliveryBlocks;

}
-(id)init;
-(void)addDeliveryBlock:(/*^block*/id)arg1 ;
-(id)synchronouslyRetrieve:(/*^block*/id)arg1 outDeliveryBlocks:(id*)arg2 ;
-(void)deliverItem:(id)arg1 ;
@end

