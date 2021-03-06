/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BPSSubscriber.h>

@class _BPSAbstractCombineLatest, NSString;

@interface _BPSAbstractCombineLatestSide : NSObject <BPSSubscriber> {

	unsigned long long _index;
	_BPSAbstractCombineLatest* _combiner;

}

@property (assign,nonatomic) unsigned long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) _BPSAbstractCombineLatest * combiner;              //@synthesize combiner=_combiner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(_BPSAbstractCombineLatest *)combiner;
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 combiner:(id)arg2 ;
-(void)setCombiner:(_BPSAbstractCombineLatest *)arg1 ;
@end

