/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLVirtualResource.h>

@class NSNumber;

@interface PLAdjustmentVirtualResource : PLVirtualResource {

	os_unfair_lock_s _lock;
	NSNumber* _cachedDataLength;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSNumber * cachedDataLength;              //@synthesize cachedDataLength=_cachedDataLength - In the implementation block
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(long long)estimatedDataLength;
-(long long)dataLength;
-(id)adjustmentDictionary;
-(id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2 ;
-(NSNumber *)cachedDataLength;
-(void)setCachedDataLength:(NSNumber *)arg1 ;
@end
