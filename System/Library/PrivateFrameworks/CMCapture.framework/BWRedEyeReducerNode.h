/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, CIContext, CIDualRedEyeRepairSession, NSString;

@interface BWRedEyeReducerNode : BWNode {

	NSDictionary* _redEyeReductionParametersByPortType;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	CIContext* _ciContext;
	CIDualRedEyeRepairSession* _redEyeRepairSession;
	opaqueCMSampleBufferRef _primaryImageSampleBuffer;
	BOOL _skipRepair;
	int _redEyeReductionVersion;
	int _inferenceType;
	NSString* _inferenceAttachmentKey;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(int)inferenceType;
-(id)initWithVersion:(int)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setInferenceType:(int)arg1 ;
-(void)setInferenceAttachmentKey:(id)arg1 ;
-(id)inferenceAttachmentKey;
@end

