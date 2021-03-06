/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PFLTaskLocalTrainingParams : PBCodable <NSCopying> {

	long long _epochs;
	double _learningRate;
	double _validationSplit;
	NSMutableArray* _orderedTrainableLayers;
	SCD_Struct_PF3 _has;

}

@property (nonatomic,retain) NSMutableArray * orderedTrainableLayers;              //@synthesize orderedTrainableLayers=_orderedTrainableLayers - In the implementation block
@property (assign,nonatomic) BOOL hasValidationSplit; 
@property (assign,nonatomic) double validationSplit;                               //@synthesize validationSplit=_validationSplit - In the implementation block
@property (assign,nonatomic) BOOL hasLearningRate; 
@property (assign,nonatomic) double learningRate;                                  //@synthesize learningRate=_learningRate - In the implementation block
@property (assign,nonatomic) BOOL hasEpochs; 
@property (assign,nonatomic) long long epochs;                                     //@synthesize epochs=_epochs - In the implementation block
+(Class)orderedTrainableLayersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLearningRate:(double)arg1 ;
-(double)learningRate;
-(long long)epochs;
-(void)setEpochs:(long long)arg1 ;
-(void)setHasEpochs:(BOOL)arg1 ;
-(BOOL)hasEpochs;
-(double)validationSplit;
-(NSMutableArray *)orderedTrainableLayers;
-(void)addOrderedTrainableLayers:(id)arg1 ;
-(unsigned long long)orderedTrainableLayersCount;
-(void)clearOrderedTrainableLayers;
-(id)orderedTrainableLayersAtIndex:(unsigned long long)arg1 ;
-(void)setValidationSplit:(double)arg1 ;
-(void)setHasValidationSplit:(BOOL)arg1 ;
-(BOOL)hasValidationSplit;
-(void)setHasLearningRate:(BOOL)arg1 ;
-(BOOL)hasLearningRate;
-(void)setOrderedTrainableLayers:(NSMutableArray *)arg1 ;
@end

