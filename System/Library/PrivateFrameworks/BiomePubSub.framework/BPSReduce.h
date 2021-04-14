/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSReduce : BPSPublisher {

	BPSPublisher* _upstream;
	id _initialResult;
	/*^block*/id _nextPartialResult;

}

@property (nonatomic,readonly) BPSPublisher * upstream;                //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id initialResult;                       //@synthesize initialResult=_initialResult - In the implementation block
@property (nonatomic,copy,readonly) id nextPartialResult;              //@synthesize nextPartialResult=_nextPartialResult - In the implementation block
-(id)init;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(id)initWithUpstream:(id)arg1 initialResult:(id)arg2 nextPartialResult:(/*^block*/id)arg3 ;
-(id)initialResult;
-(id)nextPartialResult;
@end
