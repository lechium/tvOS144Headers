/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheZone;

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation {

	/*^block*/id _creationBlock;
	HMDBackingStoreCacheZone* _zone;

}

@property (nonatomic,copy) id creationBlock;                               //@synthesize creationBlock=_creationBlock - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheZone * zone;              //@synthesize zone=_zone - In the implementation block
-(HMDBackingStoreCacheZone *)zone;
-(void)setZone:(HMDBackingStoreCacheZone *)arg1 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(id)mainReturningError;
-(id)initWithZone:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
@end

