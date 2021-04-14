/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface VCPObjectPool : NSObject {

	/*^block*/id _allocator;
	NSMutableArray* _objects;

}
+(id)objectPoolWithAllocator:(/*^block*/id)arg1 ;
-(id)getObject;
-(void)returnObject:(id)arg1 ;
-(id)initWithAllocator:(/*^block*/id)arg1 ;
@end

