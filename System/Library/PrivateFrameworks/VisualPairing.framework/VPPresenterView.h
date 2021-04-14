/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class AVPlayer, CALayer, NSArray, NSObject, NSString;

@interface VPPresenterView : UIView {

	AVPlayer* _moviePlayer;
	BOOL _started;
	CALayer* _watermarkLayer;
	NSArray* _watermarkPixelBuffers;
	unsigned long long _watermarkStepIndex;
	NSObject*<OS_dispatch_source> _watermarkStepTimer;
	unsigned _flags;
	NSString* _verificationCode;

}

@property (assign,nonatomic) unsigned flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * verificationCode;              //@synthesize verificationCode=_verificationCode - In the implementation block
-(unsigned)flags;
-(void)start;
-(void)stop;
-(void)setFlags:(unsigned)arg1 ;
-(void)layoutSubviews;
-(NSString *)verificationCode;
-(void)setVerificationCode:(NSString *)arg1 ;
-(void)_watermarkStep;
@end
