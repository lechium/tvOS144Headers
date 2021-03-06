/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}

@property (nonatomic,retain) NSMutableDictionary * bagKeySets;              //@synthesize bagKeySets=_bagKeySets - In the implementation block
-(id)init;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
-(id)generateAggregatedBagKeySet;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
-(NSMutableDictionary *)bagKeySets;
-(void)setBagKeySets:(NSMutableDictionary *)arg1 ;
@end

