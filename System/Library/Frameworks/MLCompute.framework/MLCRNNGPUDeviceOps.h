/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSMutableArray;

@interface MLCRNNGPUDeviceOps : MLCGPUDeviceOps {

	BOOL _isBidirectional;
	BOOL _batchFirst;
	BOOL _returnsSequences;
	NSMutableArray* _rnnTrainableWeights;
	NSMutableArray* _rnnTrainableWeightGradients;
	NSMutableArray* _rnnTrainableStates;
	NSMutableArray* _rnnBuffers;
	NSMutableArray* _rnnExportedWeightMatrices;
	NSMutableArray* _rnnExportedBiasTerms;
	NSMutableArray* _rnnStackedLayersResults;
	NSMutableArray* _rnnExportedInputWeightGradientMatrices;
	NSMutableArray* _rnnExportedHiddenWeightGradientMatrices;
	NSMutableArray* _rnnExportedBiasGradientMatrices;
	NSMutableArray* _rnnMomentumMatrices;
	NSMutableArray* _rnnVelocityMatrices;
	NSMutableArray* _rnnCenterWeightMatrices;
	id _ntcImageToMatrixCopyKernel;
	id _ntcMatrixToImageCopyKernel;
	unsigned long long _hiddenSize;
	unsigned long long _inputSize;
	unsigned long long _numLayers;
	id _forwardTimeGradientResult;
	id _reverseTimeGradientResult;
	id _biDirectionalGradientResult;
	id _biDirectionalSumKernel;
	id _lstmMultiGPUChildOps;

}

@property (nonatomic,retain) NSMutableArray * rnnTrainableWeights;                                  //@synthesize rnnTrainableWeights=_rnnTrainableWeights - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnTrainableWeightGradients;                          //@synthesize rnnTrainableWeightGradients=_rnnTrainableWeightGradients - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnTrainableStates;                                   //@synthesize rnnTrainableStates=_rnnTrainableStates - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnBuffers;                                           //@synthesize rnnBuffers=_rnnBuffers - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnExportedWeightMatrices;                            //@synthesize rnnExportedWeightMatrices=_rnnExportedWeightMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnExportedBiasTerms;                                 //@synthesize rnnExportedBiasTerms=_rnnExportedBiasTerms - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnStackedLayersResults;                              //@synthesize rnnStackedLayersResults=_rnnStackedLayersResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnExportedInputWeightGradientMatrices;               //@synthesize rnnExportedInputWeightGradientMatrices=_rnnExportedInputWeightGradientMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnExportedHiddenWeightGradientMatrices;              //@synthesize rnnExportedHiddenWeightGradientMatrices=_rnnExportedHiddenWeightGradientMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnExportedBiasGradientMatrices;                      //@synthesize rnnExportedBiasGradientMatrices=_rnnExportedBiasGradientMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnMomentumMatrices;                                  //@synthesize rnnMomentumMatrices=_rnnMomentumMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnVelocityMatrices;                                  //@synthesize rnnVelocityMatrices=_rnnVelocityMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnCenterWeightMatrices;                              //@synthesize rnnCenterWeightMatrices=_rnnCenterWeightMatrices - In the implementation block
@property (nonatomic,retain) id ntcImageToMatrixCopyKernel;                                         //@synthesize ntcImageToMatrixCopyKernel=_ntcImageToMatrixCopyKernel - In the implementation block
@property (nonatomic,retain) id ntcMatrixToImageCopyKernel;                                         //@synthesize ntcMatrixToImageCopyKernel=_ntcMatrixToImageCopyKernel - In the implementation block
@property (assign,nonatomic) BOOL isBidirectional;                                                  //@synthesize isBidirectional=_isBidirectional - In the implementation block
@property (assign,nonatomic) BOOL batchFirst;                                                       //@synthesize batchFirst=_batchFirst - In the implementation block
@property (assign,nonatomic) BOOL returnsSequences;                                                 //@synthesize returnsSequences=_returnsSequences - In the implementation block
@property (assign,nonatomic) unsigned long long hiddenSize;                                         //@synthesize hiddenSize=_hiddenSize - In the implementation block
@property (assign,nonatomic) unsigned long long inputSize;                                          //@synthesize inputSize=_inputSize - In the implementation block
@property (assign,nonatomic) unsigned long long numLayers;                                          //@synthesize numLayers=_numLayers - In the implementation block
@property (nonatomic,retain) id forwardTimeGradientResult;                                          //@synthesize forwardTimeGradientResult=_forwardTimeGradientResult - In the implementation block
@property (nonatomic,retain) id reverseTimeGradientResult;                                          //@synthesize reverseTimeGradientResult=_reverseTimeGradientResult - In the implementation block
@property (nonatomic,retain) id biDirectionalGradientResult;                                        //@synthesize biDirectionalGradientResult=_biDirectionalGradientResult - In the implementation block
@property (nonatomic,retain) id biDirectionalSumKernel;                                             //@synthesize biDirectionalSumKernel=_biDirectionalSumKernel - In the implementation block
@property (nonatomic,retain) id lstmMultiGPUChildOps;                                               //@synthesize lstmMultiGPUChildOps=_lstmMultiGPUChildOps - In the implementation block
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(unsigned long long)inputSize;
-(void)setInputSize:(unsigned long long)arg1 ;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(BOOL)batchFirst;
-(NSMutableArray *)rnnTrainableWeightGradients;
-(NSMutableArray *)rnnMomentumMatrices;
-(NSMutableArray *)rnnVelocityMatrices;
-(NSMutableArray *)rnnCenterWeightMatrices;
-(NSMutableArray *)rnnExportedInputWeightGradientMatrices;
-(NSMutableArray *)rnnExportedHiddenWeightGradientMatrices;
-(NSMutableArray *)rnnExportedBiasGradientMatrices;
-(unsigned long long)numLayers;
-(BOOL)isBidirectional;
-(NSMutableArray *)rnnBuffers;
-(BOOL)returnsSequences;
-(id)ntcImageToMatrixCopyKernel;
-(NSMutableArray *)rnnTrainableStates;
-(NSMutableArray *)rnnTrainableWeights;
-(id)ntcMatrixToImageCopyKernel;
-(void)setRnnStackedLayersResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rnnStackedLayersResults;
-(id)biDirectionalSumKernel;
-(id)forwardTimeGradientResult;
-(id)reverseTimeGradientResult;
-(id)biDirectionalGradientResult;
-(unsigned long long)hiddenSize;
-(void)setRnnTrainableWeights:(NSMutableArray *)arg1 ;
-(void)setRnnTrainableWeightGradients:(NSMutableArray *)arg1 ;
-(void)setRnnTrainableStates:(NSMutableArray *)arg1 ;
-(void)setRnnBuffers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rnnExportedWeightMatrices;
-(void)setRnnExportedWeightMatrices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rnnExportedBiasTerms;
-(void)setRnnExportedBiasTerms:(NSMutableArray *)arg1 ;
-(void)setRnnExportedInputWeightGradientMatrices:(NSMutableArray *)arg1 ;
-(void)setRnnExportedHiddenWeightGradientMatrices:(NSMutableArray *)arg1 ;
-(void)setRnnExportedBiasGradientMatrices:(NSMutableArray *)arg1 ;
-(void)setRnnMomentumMatrices:(NSMutableArray *)arg1 ;
-(void)setRnnVelocityMatrices:(NSMutableArray *)arg1 ;
-(void)setRnnCenterWeightMatrices:(NSMutableArray *)arg1 ;
-(void)setNtcImageToMatrixCopyKernel:(id)arg1 ;
-(void)setNtcMatrixToImageCopyKernel:(id)arg1 ;
-(void)setIsBidirectional:(BOOL)arg1 ;
-(void)setBatchFirst:(BOOL)arg1 ;
-(void)setReturnsSequences:(BOOL)arg1 ;
-(void)setHiddenSize:(unsigned long long)arg1 ;
-(void)setNumLayers:(unsigned long long)arg1 ;
-(void)setForwardTimeGradientResult:(id)arg1 ;
-(void)setReverseTimeGradientResult:(id)arg1 ;
-(void)setBiDirectionalGradientResult:(id)arg1 ;
-(void)setBiDirectionalSumKernel:(id)arg1 ;
-(id)lstmMultiGPUChildOps;
-(void)setLstmMultiGPUChildOps:(id)arg1 ;
@end

