/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CMHeadphoneMotionManagerDelegate;
@class CMHeadphoneMotionManagerInternal, CMDeviceMotion;

@interface CMHeadphoneMotionManager : NSObject {

	CMHeadphoneMotionManagerInternal* _internal;
	id<CMHeadphoneMotionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CMHeadphoneMotionManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDeviceMotionAvailable,nonatomic,readonly) BOOL deviceMotionAvailable; 
@property (getter=isDeviceMotionActive,nonatomic,readonly) BOOL deviceMotionActive; 
@property (readonly) CMDeviceMotion * deviceMotion; 
+(long long)authorizationStatus;
-(id)init;
-(void)dealloc;
-(id<CMHeadphoneMotionManagerDelegate>)delegate;
-(void)setDelegate:(id<CMHeadphoneMotionManagerDelegate>)arg1 ;
-(void)stopDeviceMotionUpdatesPrivate;
-(BOOL)isDeviceMotionActive;
-(BOOL)isDeviceMotionAvailable;
-(void)stopDeviceMotionUpdates;
-(CMDeviceMotion *)deviceMotion;
-(void)startDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)pauseDeviceMotionStreamingPrivate;
-(void)startDeviceMotionUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)resumeDeviceMotionStreamingPrivate;
-(void)onDeviceMotionPrivate:(id)arg1 ;
-(void)onDeviceMotionEventPrivate:(id)arg1 ;
-(void)applyInitialReferencePrivate:(id)arg1 ;
-(void)notifyDeviceConnectedEventToClientPrivate;
-(void)notifyDeviceDisconnectedEventToClientPrivate;
-(id)delegateQueuePrivate;
@end

