/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTEventHandler.h>

@interface MTMediaActivityEventHandler : MTEventHandler

@property (assign,nonatomic,__weak) id<MTMediaActivityEventHandlerDelegate> delegate; 
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(id)metricsDataForStartActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(id)metricsDataForStopActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6 ;
-(void)didCreateMetricsData:(id)arg1 ;
@end

