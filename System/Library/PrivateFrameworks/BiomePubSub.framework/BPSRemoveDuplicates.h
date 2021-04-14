/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher {

	BPSPublisher* _upstream;
	/*^block*/id _isDuplicate;

}

@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,copy,readonly) id isDuplicate;                  //@synthesize isDuplicate=_isDuplicate - In the implementation block
-(id)init;
-(void)subscribe:(id)arg1 ;
-(id)isDuplicate;
-(BPSPublisher *)upstream;
-(id)initWithUpstream:(id)arg1 isDuplicate:(/*^block*/id)arg2 ;
@end

