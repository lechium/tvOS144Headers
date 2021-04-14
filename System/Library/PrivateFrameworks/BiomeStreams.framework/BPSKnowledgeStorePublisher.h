/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@protocol _DKKnowledgeQuerying;
@class _DKEventQuery;

@interface BPSKnowledgeStorePublisher : BPSPublisher {

	_DKEventQuery* _query;
	id<_DKKnowledgeQuerying> _store;

}

@property (nonatomic,readonly) _DKEventQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
-(id)init;
-(_DKEventQuery *)query;
-(id<_DKKnowledgeQuerying>)store;
-(void)subscribe:(id)arg1 ;
-(id)initWithEventQuery:(id)arg1 knowledgeStore:(id)arg2 ;
@end
