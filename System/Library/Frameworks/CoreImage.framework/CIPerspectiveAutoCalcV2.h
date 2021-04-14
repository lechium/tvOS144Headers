/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIPerspectiveAutoCalc.h>

@class CIImage;

@interface CIPerspectiveAutoCalcV2 : CIPerspectiveAutoCalc {

	float3x3 K;
	float3x3 invK;
	float3x3 T;
	float3x3 invT;
	CIImage* gradMap;
	unsigned long long gradMapW;
	unsigned long long gradMapH;
	* gradMapBmp;
	unsigned long long gradMapRb;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* vLines;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* hLines;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* vClusterInliers;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* hClusterInliers;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* vClusterOutliers;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* hClusterOutliers;
	vector<LineCostProxy, std::__1::allocator<LineCostProxy> >* vClusterInliersProxies;
	vector<LineCostProxy, std::__1::allocator<LineCostProxy> >* hClusterInliersProxies;
	vector<LineCostProxy, std::__1::allocator<LineCostProxy> >* vClusterOutliersProxies;
	vector<LineCostProxy, std::__1::allocator<LineCostProxy> >* hClusterOutliersProxies;
	[64 initialSimplexVerticesXYZ];
	[16 initialSimplexVerticesXZ];
	[16 initialSimplexVerticesYZ];
	int solutionType;
	Solution solution;
	double unlimitedPitch;
	double unlimitedYaw;
	double unlimitedRoll;

}

@property (readonly) double unlimitedPitch; 
@property (readonly) double unlimitedYaw; 
@property (readonly) double unlimitedRoll; 
-(void)dealloc;
-(id)initWithContext:(id)arg1 image:(id)arg2 config:(const SCD_Struct_CI32*)arg3 ;
-(BOOL)compute;
-(double)unlimitedPitch;
-(double)unlimitedYaw;
-(double)unlimitedRoll;
-(void)standardizeImage;
-(void)createGradientMap;
-(void)normalizeGradientMap;
-(void)thresholdGradientMap;
-(void)extractLineSegments;
-(void)clusterLineSegments;
-(void)setupCostFunction;
-(void)runOptimization;
-(void)computeConfidence;
-(float)evaluateCost:;
-(float)evaluateCostXZ:;
-(float)evaluateCostYZ:;
@end

