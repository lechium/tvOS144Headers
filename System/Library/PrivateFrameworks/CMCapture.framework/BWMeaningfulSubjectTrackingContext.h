/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWMeaningfulSubjectTrackingContext : NSObject {

	SCD_Struct_BW17 result;
	TtTrkRpnContextRef handle;
	SCD_Struct_BW19 control;
	SCD_Struct_BW20 config;
	SCD_Struct_BW21 state;
	SCD_Struct_BW22 params;
	SCD_Struct_BW23* networkBufferPointers;
	SCD_Struct_BW25 networkInputCropControls;
	SCD_Struct_BW27* networkBuffers;
	SCD_Struct_BW28* networkCropBuffer;
	void* examplePlan;
	SCD_Struct_BW29* exampleNetwork;
	SCD_Struct_BW30* exampleRegressionOutputTensor;
	SCD_Struct_BW30* exampleClassificationOutputTensor;
	void* trackingPlan;
	SCD_Struct_BW29* trackingNetwork;
	SCD_Struct_BW30* trackingRegressionInputTensor;
	SCD_Struct_BW30* trackingClassificationInputTensor;
	SCD_Struct_BW30* trackingRegressionOutputTensor;
	SCD_Struct_BW30* trackingClassificationOutputTensor;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithExampleNetworkURL:(id)arg1 trackingNetworkURL:(id)arg2 context:(void*)arg3 priority:(int)arg4 sharedIntermediateBufferPlan:(void*)arg5 cropBuffer:(SCD_Struct_BW28*)arg6 ;
@end

