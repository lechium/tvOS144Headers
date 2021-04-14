/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface PKUIAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _didStartHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id didStartHandler;                      //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)didStartHandler;
-(void)setDidStartHandler:(id)arg1 ;
@end

