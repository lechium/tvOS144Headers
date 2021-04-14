/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCUpsampleLayer : MLCLayer {

	BOOL _alignsCorners;
	int _sampleMode;
	NSArray* _shape;
	unsigned long long _upsampleWidth;
	unsigned long long _upsampleHeight;

}

@property (nonatomic,readonly) unsigned long long upsampleWidth;               //@synthesize upsampleWidth=_upsampleWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long upsampleHeight;              //@synthesize upsampleHeight=_upsampleHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shape;                           //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) int sampleMode;                                 //@synthesize sampleMode=_sampleMode - In the implementation block
@property (nonatomic,readonly) BOOL alignsCorners;                             //@synthesize alignsCorners=_alignsCorners - In the implementation block
+(id)layerWithShape:(id)arg1 ;
+(id)layerWithShape:(id)arg1 sampleMode:(int)arg2 alignsCorners:(BOOL)arg3 ;
-(id)description;
-(NSArray *)shape;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithShape:(id)arg1 sampleMode:(int)arg2 alignCorners:(BOOL)arg3 ;
-(unsigned long long)upsampleWidth;
-(unsigned long long)upsampleHeight;
-(int)sampleMode;
-(BOOL)alignsCorners;
@end

