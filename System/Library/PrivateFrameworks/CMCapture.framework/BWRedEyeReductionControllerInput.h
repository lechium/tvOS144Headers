/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWRedEyeReductionControllerInputDelegate, BWStillImageProcessorControllerDelegate;
@class NSArray;

@interface BWRedEyeReductionControllerInput : BWStillImageProcessorInput {

	id<BWRedEyeReductionControllerInputDelegate> _inputDelegate;
	id<BWStillImageProcessorControllerDelegate> _processorControllerDelegate;
	opaqueCMSampleBufferRef _primaryImage;
	opaqueCMSampleBufferRef _auxImage;
	NSArray* _faceObservations;
	BOOL _requiresSensorInterfaceRawPropagation;

}

@property (nonatomic,retain) id<BWRedEyeReductionControllerInputDelegate> inputDelegate;                           //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,retain) id<BWStillImageProcessorControllerDelegate> processorControllerDelegate;              //@synthesize processorControllerDelegate=_processorControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL requiresSensorInterfaceRawPropagation;                                           //@synthesize requiresSensorInterfaceRawPropagation=_requiresSensorInterfaceRawPropagation - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef primaryImage;                                               //@synthesize primaryImage=_primaryImage - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef auxImage;                                                   //@synthesize auxImage=_auxImage - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                                                         //@synthesize faceObservations=_faceObservations - In the implementation block
+(BOOL)requiresInferencesFromFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(opaqueCMSampleBufferRef)primaryImage;
-(id<BWRedEyeReductionControllerInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<BWRedEyeReductionControllerInputDelegate>)arg1 ;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 faceObservations:(id)arg2 ;
-(BOOL)requiresSensorInterfaceRawPropagation;
-(opaqueCMSampleBufferRef)auxImage;
-(NSArray *)faceObservations;
-(id<BWStillImageProcessorControllerDelegate>)processorControllerDelegate;
-(void)setProcessorControllerDelegate:(id<BWStillImageProcessorControllerDelegate>)arg1 ;
-(void)setRequiresSensorInterfaceRawPropagation:(BOOL)arg1 ;
@end
