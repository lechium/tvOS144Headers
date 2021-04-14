/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMSourceNode.h>

@protocol OS_dispatch_queue, AXMAVCaptureSessionNodeDelegate, AXMAVCaptureSessionNodeFrameDelegate;
@class NSObject, AXMVisionAnalysisOptions;

@interface AXMAVCaptureSessionNode : AXMSourceNode {

	NSObject*<OS_dispatch_queue> _autotrigger_queue;
	id<AXMAVCaptureSessionNodeDelegate> _captureSessionNodeDelegate;
	id<AXMAVCaptureSessionNodeFrameDelegate> _frameDelegate;
	AXMVisionAnalysisOptions* _analysisOptions;

}

@property (nonatomic,retain) AXMVisionAnalysisOptions * analysisOptions;                                         //@synthesize analysisOptions=_analysisOptions - In the implementation block
@property (assign,nonatomic,__weak) id<AXMAVCaptureSessionNodeDelegate> captureSessionNodeDelegate;              //@synthesize captureSessionNodeDelegate=_captureSessionNodeDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AXMAVCaptureSessionNodeFrameDelegate> frameDelegate;                      //@synthesize frameDelegate=_frameDelegate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)nodeInitialize;
-(AXMVisionAnalysisOptions *)analysisOptions;
-(void)setShouldProcessRemotely:(BOOL)arg1 ;
-(void)produceImage:(id)arg1 ;
-(void)setAnalysisOptions:(AXMVisionAnalysisOptions *)arg1 ;
-(void)endVideoFrameEvents;
-(void)setCaptureSessionNodeDelegate:(id<AXMAVCaptureSessionNodeDelegate>)arg1 ;
-(void)endAutoTriggerOfVideoFrameEvents;
-(id<AXMAVCaptureSessionNodeDelegate>)captureSessionNodeDelegate;
-(id<AXMAVCaptureSessionNodeFrameDelegate>)frameDelegate;
-(void)setFrameDelegate:(id<AXMAVCaptureSessionNodeFrameDelegate>)arg1 ;
@end

