/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSEnumerator;

@interface MPMiddlewareChain : NSObject {

	NSEnumerator* _middlewareEnumerator;
	SEL _builderSelector;

}

@property (assign,nonatomic) SEL builderSelector;              //@synthesize builderSelector=_builderSelector - In the implementation block
+(void)_addBuilderProtocol:(id)arg1 ;
+(id)builderProxyForProtocol:(id)arg1 ;
+(void)registerReturnType:(const char*)arg1 returnValueBlock:(id)arg2 ;
-(id)nextObject;
-(void)setBuilderSelector:(SEL)arg1 ;
-(id)initWithMiddleware:(id)arg1 protocol:(id)arg2 ;
-(SEL)builderSelector;
@end

