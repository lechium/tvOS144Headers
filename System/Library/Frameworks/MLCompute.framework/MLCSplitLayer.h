/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCSplitLayer : MLCLayer {

	unsigned long long _dimension;
	unsigned long long _splitCount;
	NSArray* _splitSectionLengths;

}

@property (nonatomic,readonly) unsigned long long dimension;                    //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) unsigned long long splitCount;                   //@synthesize splitCount=_splitCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * splitSectionLengths;              //@synthesize splitSectionLengths=_splitSectionLengths - In the implementation block
+(id)layerWithSplitCount:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
+(id)layerWithSplitSectionLengths:(id)arg1 dimension:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)dimension;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 ;
-(unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2 ;
-(unsigned long long)deviceMemorySizeForForward;
-(BOOL)isStaticBatchSize;
-(id)initWithSplitCount:(unsigned long long)arg1 splitSectionLengths:(id)arg2 dimension:(unsigned long long)arg3 ;
-(unsigned long long)splitCount;
-(NSArray *)splitSectionLengths;
@end

