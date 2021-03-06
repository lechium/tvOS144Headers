/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AVFlowDetector.h>

@interface StrictlyPeriodicAVFlowDetector : AVFlowDetector {

	double _maxPeriodicAVTCPFlowBusyInterval;
	double _minPeriodicAVTCPFlowCycleTime;
	double _maxPeriodicAVTCPFlowCycleTime;
	double _maxPeriodicAVTCPFlowCycleVariance;
	unsigned long long _minPeriodicAVTCPFlowCyclesToConsider;
	unsigned long long _maxPeriodicAVTCPFlowCyclesToConsider;
	double _maxPeriodicAVUDPFlowBusyInterval;
	double _minPeriodicAVUDPFlowCycleTime;
	double _maxPeriodicAVUDPFlowCycleTime;
	double _maxPeriodicAVUDPFlowCycleVariance;
	unsigned long long _minPeriodicAVUDPFlowCyclesToConsider;
	unsigned long long _maxPeriodicAVUDPFlowCyclesToConsider;
	unsigned _scoreBaselinePass;
	unsigned _scorePerCycleIncrement;
	unsigned _scoreTCIncrement;
	unsigned _scoreMax;

}
-(id)init;
-(int)setConfiguration:(id)arg1 ;
-(void)setDefaults;
-(id)getState:(BOOL)arg1 ;
-(int)possibleAVFlowScore:(id)arg1 result:(AVFlowDetectionResult*)arg2 ;
@end

