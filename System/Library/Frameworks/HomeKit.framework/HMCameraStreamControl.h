/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMCameraControl.h>
#import <libobjc.A.dylib/_HMCameraStreamControlDelegate.h>

@protocol HMCameraStreamControlDelegate;
@class HMFUnfairLock, _HMCameraStreamControl, HMCameraStream, NSString;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {

	HMFUnfairLock* _lock;
	id<HMCameraStreamControlDelegate> _delegate;
	_HMCameraStreamControl* _streamControl;

}

@property (nonatomic,retain) _HMCameraStreamControl * streamControl;                         //@synthesize streamControl=_streamControl - In the implementation block
@property (assign,nonatomic,__weak) id<HMCameraStreamControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long streamState; 
@property (nonatomic,readonly) HMCameraStream * cameraStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMCameraStreamControlDelegate>)delegate;
-(void)setDelegate:(id<HMCameraStreamControlDelegate>)arg1 ;
-(unsigned long long)streamState;
-(_HMCameraStreamControl *)streamControl;
-(HMCameraStream *)cameraStream;
-(void)startStreamWithPreferences:(id)arg1 ;
-(void)stopStream;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2 ;
-(id)initWithStreamControl:(id)arg1 ;
-(void)startStream;
-(void)setStreamControl:(_HMCameraStreamControl *)arg1 ;
@end

