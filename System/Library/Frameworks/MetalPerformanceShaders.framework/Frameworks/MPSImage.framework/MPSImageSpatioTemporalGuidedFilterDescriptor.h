/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MPSImageSpatioTemporalGuidedFilterDescriptor : NSObject {

	BOOL _preallocateIntermediates;
	BOOL _useHighPrecisionIntermediates;
	float _epsilon;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _arrayLength;
	unsigned long long _kernelSpatialDiameter;
	unsigned long long _kernelTemporalDiameter;
	unsigned long long _sourceChannels;
	unsigned long long _guideChannels;

}

@property (assign,nonatomic) unsigned long long width;                               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long arrayLength;                         //@synthesize arrayLength=_arrayLength - In the implementation block
@property (assign,nonatomic) unsigned long long kernelSpatialDiameter;               //@synthesize kernelSpatialDiameter=_kernelSpatialDiameter - In the implementation block
@property (assign,nonatomic) unsigned long long kernelTemporalDiameter;              //@synthesize kernelTemporalDiameter=_kernelTemporalDiameter - In the implementation block
@property (assign,nonatomic) float epsilon;                                          //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) unsigned long long guideChannels;                       //@synthesize guideChannels=_guideChannels - In the implementation block
@property (assign,nonatomic) unsigned long long sourceChannels;                      //@synthesize sourceChannels=_sourceChannels - In the implementation block
@property (assign,nonatomic) BOOL preallocateIntermediates;                          //@synthesize preallocateIntermediates=_preallocateIntermediates - In the implementation block
@property (assign,nonatomic) BOOL useHighPrecisionIntermediates;                     //@synthesize useHighPrecisionIntermediates=_useHighPrecisionIntermediates - In the implementation block
+(id)filterDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 arrayLength:(unsigned long long)arg3 kernelSpatialDiameter:(unsigned long long)arg4 kernelTemporalDiameter:(unsigned long long)arg5 epsilon:(float)arg6 sourceChannels:(unsigned long long)arg7 guideChannels:(unsigned long long)arg8 preallocateIntermediates:(BOOL)arg9 ;
+(id)filterDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 arrayLength:(unsigned long long)arg3 kernelSpatialDiameter:(unsigned long long)arg4 kernelTemporalDiameter:(unsigned long long)arg5 epsilon:(float)arg6 sourceChannels:(unsigned long long)arg7 guideChannels:(unsigned long long)arg8 ;
-(id)init;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)arrayLength;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(unsigned long long)kernelSpatialDiameter;
-(void)setKernelSpatialDiameter:(unsigned long long)arg1 ;
-(unsigned long long)kernelTemporalDiameter;
-(void)setKernelTemporalDiameter:(unsigned long long)arg1 ;
-(unsigned long long)sourceChannels;
-(void)setSourceChannels:(unsigned long long)arg1 ;
-(unsigned long long)guideChannels;
-(void)setGuideChannels:(unsigned long long)arg1 ;
-(BOOL)preallocateIntermediates;
-(void)setPreallocateIntermediates:(BOOL)arg1 ;
-(BOOL)useHighPrecisionIntermediates;
-(void)setUseHighPrecisionIntermediates:(BOOL)arg1 ;
@end

