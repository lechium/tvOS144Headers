/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXMetricContainer <NSObject>
@property (nonatomic,readonly) BOOL measurementsEnabled; 
@required
-(id)startMeasure:(id)arg1;
-(void)measure:(id)arg1 execute:(/*^block*/id)arg2;
-(BOOL)measurementsEnabled;
-(id)measure:(id)arg1 tryExecute:(/*^block*/id)arg2;

@end

