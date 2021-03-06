/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSLocking.h>

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking> {

	NSLock* _lock;
	BOOL _sessionPrompt;

}

@property (assign) BOOL sessionPrompt;              //@synthesize sessionPrompt=_sessionPrompt - In the implementation block
+(id)coordinator;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)_init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSessionPrompt:(BOOL)arg1 ;
-(BOOL)sessionPrompt;
-(void)markPrompt;
-(BOOL)didPrompt;
@end

