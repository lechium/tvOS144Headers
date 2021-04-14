/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWStillImageProcessorControllerDelegate;
@class BWRedEyeReductionControllerInput;

@interface BWRedEyeReductionRequest : NSObject {

	BWRedEyeReductionControllerInput* _input;
	id<BWStillImageProcessorControllerDelegate> _delegate;
	int _mode;

}

@property (nonatomic,readonly) BWRedEyeReductionControllerInput * input;                          //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWStillImageProcessorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
-(id)description;
-(void)dealloc;
-(id<BWStillImageProcessorControllerDelegate>)delegate;
-(void)setMode:(int)arg1 ;
-(BWRedEyeReductionControllerInput *)input;
-(int)mode;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
@end

