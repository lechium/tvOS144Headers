/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class NSArray;

@interface ShotflowNetwork : NSObject {

	SCD_Struct_VN58* _espressoNetwork;
	void* _espressoPlan;
	void* _espressoContext;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _logitsPosOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _logitsNegOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _offsetsOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _rollOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _yawOutputs;
	unsigned long long _currentNetworkWidth;
	unsigned long long _currentNetworkHeight;
	BOOL _releaseEspressoContext;
	BOOL _releaseEspressoPlan;
	BOOL isAnchorSquare[10];
	NSArray* _filterThreshold;
	float _defaultBoxSizes[6][10][2];
	float _threshold;
	unsigned long long _preferredSmallSide;

}

@property (nonatomic,readonly) unsigned long long preferredSmallSide;              //@synthesize preferredSmallSide=_preferredSmallSide - In the implementation block
@property (assign,nonatomic) float threshold;                                      //@synthesize threshold=_threshold - In the implementation block
+(float)inputScale;
+(const vector<float, std::__1::allocator<float> >*)strides;
+(id)inputLayerName;
+(float)inputImageMinDimension;
+(float)inputImageMaxDimension;
+(float)inputImageAspectRatio;
+(BOOL)hasPose;
+(float)nonSquareYawDefault;
+(float)nonSquareRollDefault;
+(unsigned long long)numberBinsYaw;
+(unsigned long long)numberBinsRoll;
+(BOOL)inputBGR;
+(tuple<float, float, float>)inputBiasRGB;
+(const vector<float, std::__1::allocator<float> >*)defaultBoxesSides;
+(id)processingDeviceNetworkWithModelPath:(id)arg1 threshold:(float)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5 ;
+(id)processingDeviceDetectorWithEspressoNetwork:(SCD_Struct_VN58*)arg1 espressoPlan:(void*)arg2 threshold:(float)arg3 ;
-(void)dealloc;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(id)initWithEspressoNetwork:(SCD_Struct_VN58*)arg1 espressoPlan:(void*)arg2 threshold:(float)arg3 ;
-(void)initializeEspressoResourcesWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 ;
-(void)initializeBuffers;
-(int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)runNetwork:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)processVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)resizeAndProcessVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(unsigned long long)preferredSmallSide;
@end

