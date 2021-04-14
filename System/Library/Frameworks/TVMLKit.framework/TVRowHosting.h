/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVRowHosting <NSObject>
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
@optional
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1;
-(BOOL)shouldBindRowsTogether;

@required
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;

@end

