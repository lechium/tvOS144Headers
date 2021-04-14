/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol OS_dispatch_semaphore;
@class MPSCNNLoss, NSObject, NSData, MPSMatrix, MPSImage;

@interface MPSCNNYOLOLoss : MPSCNNKernel {

	MPSCNNLoss* _lossXY;
	MPSCNNLoss* _lossWH;
	MPSCNNLoss* _lossConfidence;
	MPSCNNLoss* _lossClasses;
	int _reductionType;
	BOOL _reduceAcrossBatch;
	BOOL _rescore;
	float _scaleXY;
	float _scaleWH;
	float _scaleNoObject;
	float _scaleObject;
	float _scaleClass;
	float _minIOUForObjectPresence;
	float _maxIOUForObjectAbsence;
	float _countOfPresentObjects;
	NSObject*<OS_dispatch_semaphore> _encodingSemaphore;
	NSData* _anchorBoxes;
	unsigned long long _numberOfAnchorBoxes;
	MPSMatrix* _reductionBuffer;
	MPSImage* _firstLossTexture;

}

@property (assign,nonatomic) float scaleXY;                                       //@synthesize scaleXY=_scaleXY - In the implementation block
@property (assign,nonatomic) float scaleWH;                                       //@synthesize scaleWH=_scaleWH - In the implementation block
@property (assign,nonatomic) float scaleNoObject;                                 //@synthesize scaleNoObject=_scaleNoObject - In the implementation block
@property (assign,nonatomic) float scaleObject;                                   //@synthesize scaleObject=_scaleObject - In the implementation block
@property (assign,nonatomic) float scaleClass;                                    //@synthesize scaleClass=_scaleClass - In the implementation block
@property (assign,nonatomic) float minIOUForObjectPresence;                       //@synthesize minIOUForObjectPresence=_minIOUForObjectPresence - In the implementation block
@property (assign,nonatomic) float maxIOUForObjectAbsence;                        //@synthesize maxIOUForObjectAbsence=_maxIOUForObjectAbsence - In the implementation block
@property (assign,nonatomic) int reductionType;                                   //@synthesize reductionType=_reductionType - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAnchorBoxes;              //@synthesize numberOfAnchorBoxes=_numberOfAnchorBoxes - In the implementation block
@property (nonatomic,retain) NSData * anchorBoxes;                                //@synthesize anchorBoxes=_anchorBoxes - In the implementation block
@property (assign,nonatomic) BOOL reduceAcrossBatch;                              //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNLoss * lossXY;                        //@synthesize lossXY=_lossXY - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNLoss * lossWH;                        //@synthesize lossWH=_lossWH - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNLoss * lossConfidence;                //@synthesize lossConfidence=_lossConfidence - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNLoss * lossClasses;                   //@synthesize lossClasses=_lossClasses - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(int)reductionType;
-(BOOL)reduceAcrossBatch;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 destinationImages:(id)arg4 ;
-(void)setReductionType:(int)arg1 ;
-(void)setReduceAcrossBatch:(BOOL)arg1 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 ;
-(void)setAnchorBoxes:(NSData *)arg1 ;
-(void)setNumberOfAnchorBoxes:(unsigned long long)arg1 ;
-(void)setScaleXY:(float)arg1 ;
-(void)setScaleWH:(float)arg1 ;
-(void)setScaleNoObject:(float)arg1 ;
-(void)setScaleObject:(float)arg1 ;
-(void)setScaleClass:(float)arg1 ;
-(void)setMinIOUForObjectPresence:(float)arg1 ;
-(void)setMaxIOUForObjectAbsence:(float)arg1 ;
-(float)scaleXY;
-(float)scaleWH;
-(float)scaleNoObject;
-(float)scaleObject;
-(float)scaleClass;
-(float)minIOUForObjectPresence;
-(float)maxIOUForObjectAbsence;
-(NSData *)anchorBoxes;
-(unsigned long long)numberOfAnchorBoxes;
-(void)initializeSupportFiltersWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(float)countPresetobjectsSourceImages:(id)arg1 labels:(id)arg2 ;
-(MPSCNNLoss *)lossXY;
-(MPSCNNLoss *)lossWH;
-(MPSCNNLoss *)lossConfidence;
-(MPSCNNLoss *)lossClasses;
@end

