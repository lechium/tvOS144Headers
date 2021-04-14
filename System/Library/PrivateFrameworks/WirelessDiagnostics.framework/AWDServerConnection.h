/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDServerConnection : NSObject {

	AWDServerConnection* fServerConnection;

}
-(void)dealloc;
-(BOOL)registerQueriableMetric:(unsigned)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithComponentId:(unsigned)arg1 ;
-(id)initWithComponentId:(unsigned)arg1 andBlockOnConfiguration:(BOOL)arg2 ;
-(id)newMetricContainerWithIdentifier:(unsigned)arg1 ;
-(BOOL)submitMetric:(id)arg1 ;
-(BOOL)registerQueriableMetricCallback:(/*^block*/id)arg1 forIdentifier:(unsigned)arg2 ;
-(BOOL)registerConfigChangeCallback:(/*^block*/id)arg1 ;
-(id)getComponentConfigurationParameters;
-(void)registerComponentParametersChangeCallback:(/*^block*/id)arg1 ;
-(unsigned long long)getAWDTimestamp;
-(void)flushToQueue:(dispatch_queue_sRef)arg1 block:(/*^block*/id)arg2 ;
@end

