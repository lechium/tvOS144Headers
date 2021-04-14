/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableArray;

@interface MTPAFPlaylist : NSObject {

	NSArray* _metricsData;
	NSMutableArray* _items;

}

@property (copy) NSArray * metricsData;                           //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSArray *)metricsData;
-(void)setMetricsData:(NSArray *)arg1 ;
-(id)currentItems;
-(void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(id)initWithSharedMetricsData:(id)arg1 ;
-(void)updateEventData:(id)arg1 ;
@end

