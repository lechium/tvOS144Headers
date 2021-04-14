/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CoreMediaDownload : NSObject {

	unsigned _downloadState;
	double _startTime;
	double _estimatedDuration;
	double _prevRunBusyTime;
	double _prevRunIdleTime;
	double _thisRunStartTime;
	double _quarantineStartTime;
	unsigned long long _prevRunsIfTypeRxBytes;
	unsigned long long _prevRunsIfTypeTxBytes;
	unsigned long long _thisRunStartfTypeRxBytes;
	unsigned long long _thisRunStartfTypeTxBytes;

}

@property (assign,nonatomic) double startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double estimatedDuration;                                 //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (assign,nonatomic) double prevRunBusyTime;                                   //@synthesize prevRunBusyTime=_prevRunBusyTime - In the implementation block
@property (assign,nonatomic) double prevRunIdleTime;                                   //@synthesize prevRunIdleTime=_prevRunIdleTime - In the implementation block
@property (assign,nonatomic) double thisRunStartTime;                                  //@synthesize thisRunStartTime=_thisRunStartTime - In the implementation block
@property (assign,nonatomic) double quarantineStartTime;                               //@synthesize quarantineStartTime=_quarantineStartTime - In the implementation block
@property (assign,nonatomic) unsigned downloadState;                                   //@synthesize downloadState=_downloadState - In the implementation block
@property (assign,nonatomic) unsigned long long prevRunsIfTypeRxBytes;                 //@synthesize prevRunsIfTypeRxBytes=_prevRunsIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long prevRunsIfTypeTxBytes;                 //@synthesize prevRunsIfTypeTxBytes=_prevRunsIfTypeTxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long thisRunStartfTypeRxBytes;              //@synthesize thisRunStartfTypeRxBytes=_thisRunStartfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long thisRunStartfTypeTxBytes;              //@synthesize thisRunStartfTypeTxBytes=_thisRunStartfTypeTxBytes - In the implementation block
-(id)description;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(unsigned)downloadState;
-(void)setDownloadState:(unsigned)arg1 ;
-(double)estimatedDuration;
-(double)thisRunStartTime;
-(double)prevRunIdleTime;
-(void)setPrevRunIdleTime:(double)arg1 ;
-(double)prevRunBusyTime;
-(void)setPrevRunBusyTime:(double)arg1 ;
-(unsigned long long)thisRunStartfTypeRxBytes;
-(unsigned long long)prevRunsIfTypeRxBytes;
-(void)setPrevRunsIfTypeRxBytes:(unsigned long long)arg1 ;
-(unsigned long long)thisRunStartfTypeTxBytes;
-(unsigned long long)prevRunsIfTypeTxBytes;
-(void)setPrevRunsIfTypeTxBytes:(unsigned long long)arg1 ;
-(void)setEstimatedDuration:(double)arg1 ;
-(void)setThisRunStartTime:(double)arg1 ;
-(void)setThisRunStartfTypeRxBytes:(unsigned long long)arg1 ;
-(void)setThisRunStartfTypeTxBytes:(unsigned long long)arg1 ;
-(id)coreMediaDownloadStateToString:(unsigned)arg1 ;
-(double)quarantineStartTime;
-(void)setQuarantineStartTime:(double)arg1 ;
@end

