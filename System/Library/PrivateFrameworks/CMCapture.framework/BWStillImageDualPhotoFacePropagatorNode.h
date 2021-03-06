/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, BWNodeError, BWNodeInput, BWNodeOutput;

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {

	long long _currentSettingsID;
	NSArray* _baseZoomFactors;
	opaqueCMSampleBufferRef _widerFOVBuffer;
	opaqueCMSampleBufferRef _narrowerFOVBuffer;
	BWNodeError* _widerFOVError;
	BWNodeError* _narrowerFOVError;
	BWNodeInput* _widerFOVInput;
	BWNodeInput* _narrowerFOVInput;
	BWNodeOutput* _widerFOVOutput;
	BWNodeOutput* _narrowerFOVOutput;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(id)initWithBaseZoomFactors:(id)arg1 ;
-(void)_configureCaptureRequestStateWithStillImageSettings:(id)arg1 ;
-(void)_processWiderAndNarrowerFOVInput;
-(void)_emitBuffersAndErrorsToOutputs;
@end

