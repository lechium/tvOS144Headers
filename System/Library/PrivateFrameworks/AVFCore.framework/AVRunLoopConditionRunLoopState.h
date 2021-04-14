/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@interface AVRunLoopConditionRunLoopState : NSObject {

	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _signalSource;
	BOOL _signaled;

}

@property (nonatomic,readonly) CFRunLoopRef runLoop;                       //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef signalSource;              //@synthesize signalSource=_signalSource - In the implementation block
@property (assign,nonatomic) BOOL signaled;                                //@synthesize signaled=_signaled - In the implementation block
+(id)runLoopStateWithRunLoop:(CFRunLoopRef)arg1 ;
-(void)dealloc;
-(CFRunLoopRef)runLoop;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(CFRunLoopSourceRef)signalSource;
-(void)setSignalSource:(CFRunLoopSourceRef)arg1 ;
-(BOOL)signaled;
-(void)setSignaled:(BOOL)arg1 ;
@end
