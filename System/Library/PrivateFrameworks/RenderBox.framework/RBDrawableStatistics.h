/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol RBDrawableStatistics
@property (nonatomic,copy,readonly) NSDictionary * statistics; 
@property (nonatomic,copy) id statisticsHandler; 
@required
-(NSDictionary *)statistics;
-(void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;
-(id)statisticsHandler;
-(void)setStatisticsHandler:(/*^block*/id)arg1;

@end

