/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Pegasus/Pegasus-Structs.h>
@class NSMutableDictionary;

@interface PGInterruptionAssistant : NSObject {

	NSMutableDictionary* _reasons;
	BOOL _ignoreFaceTimeCameraInterruptions;
	BOOL _allowsResumingAfterInterruptionEnds;
	BOOL _isInterrupted;
	BOOL _lastInterruptionStateSentToProxy;
	os_unfair_lock_s _unfairLock;

}

@property (getter=isInterrupted,readonly) BOOL interrupted; 
@property (readonly) BOOL allowsResumingAfterInterruptionEnds; 
-(id)init;
-(BOOL)isInterrupted;
-(long long)addReason:(long long)arg1 ;
-(long long)_numberOfInterruptionsForReason:(long long)arg1 ;
-(BOOL)_calculateIsInterrupted;
-(id)initWithExceptionPolicy:(long long)arg1 ;
-(BOOL)shouldNotifyProxyOfInterruptionBegan;
-(void)noteDidNotifyProxyOfInterruptionBegan;
-(BOOL)shouldNotifyProxyOfInterruptionEnded;
-(void)noteDidNotifyProxyOfInterruptionEnded;
-(BOOL)allowsResumingAfterInterruptionEnds;
-(long long)removeReason:(long long)arg1 ;
-(BOOL)isInterruptedForReason:(long long)arg1 ;
-(void)notePictureInPictureSessionDidEnd;
@end

