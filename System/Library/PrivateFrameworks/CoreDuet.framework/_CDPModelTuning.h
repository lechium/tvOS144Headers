/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _CDPModelTuningState, _CDPSimpleModel, NSIndexSet;

@interface _CDPModelTuning : NSObject {

	_CDPModelTuningState* _currentState;
	int _numberOfGridTests;
	/*^block*/id _scorer;
	/*^block*/id _heartBeat;
	_CDPSimpleModel* _model;
	NSIndexSet* _testIndices;

}

@property (nonatomic,copy) id scorer;                                            //@synthesize scorer=_scorer - In the implementation block
@property (nonatomic,copy) id heartBeat;                                         //@synthesize heartBeat=_heartBeat - In the implementation block
@property (nonatomic,retain) _CDPSimpleModel * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSIndexSet * testIndices;                           //@synthesize testIndices=_testIndices - In the implementation block
@property (nonatomic,readonly) int numberOfGridTests;                            //@synthesize numberOfGridTests=_numberOfGridTests - In the implementation block
@property (nonatomic,readonly) _CDPModelTuningState * currentState;              //@synthesize currentState=_currentState - In the implementation block
+(/*^block*/id)fScoreWithBeta:(float)arg1 ;
+(void)_enumerateSubsetsOfSet:(unsigned*)arg1 setLength:(unsigned long long)arg2 index:(unsigned long long)arg3 subset:(unsigned*)arg4 subsetLength:(unsigned long long)arg5 index:(unsigned long long)arg6 callback:(/*^block*/id)arg7 ;
+(unsigned*)_newSetDifference:(unsigned*)arg1 setLength:(unsigned long long)arg2 subset:(unsigned*)arg3 subsetLength:(unsigned long long)arg4 ;
+(void)_cumulativeSumOfArray:(float*)arg1 size:(unsigned long long)arg2 reverse:(BOOL)arg3 ;
+(void)_addArray:(float*)arg1 size:(unsigned long long)arg2 inArray:(float*)arg3 ;
+(void)_enumerateSubsetsOfSet:(unsigned*)arg1 setLength:(unsigned long long)arg2 withSize:(unsigned long long)arg3 callback:(/*^block*/id)arg4 ;
+(/*^block*/id)f1Score;
+(/*^block*/id)f2Score;
-(_CDPModelTuningState *)currentState;
-(_CDPSimpleModel *)model;
-(void)setModel:(_CDPSimpleModel *)arg1 ;
-(float)_testModelWithThreshold:(float*)arg1 ;
-(id)heartBeat;
-(NSIndexSet *)testIndices;
-(id)scorer;
-(void)resumeTuningWithState:(id)arg1 ;
-(void)setScorer:(id)arg1 ;
-(void)setHeartBeat:(id)arg1 ;
-(void)setTestIndices:(NSIndexSet *)arg1 ;
-(int)numberOfGridTests;
@end

