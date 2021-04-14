/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareOperation.h>

@class NSArray, MPCMediaRemoteMiddleware, MPCFuture, NSError, NSString;

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation> {

	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCMediaRemoteMiddleware* _middleware;
	MPCFuture* _supportedCommandsFuture;

}

@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCFuture * supportedCommandsFuture;                //@synthesize supportedCommandsFuture=_supportedCommandsFuture - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                  //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)execute;
-(id)timeoutDescription;
-(NSArray *)invalidationObservers;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(id)initWithMiddleware:(id)arg1 ;
-(void)setSupportedCommandsFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)supportedCommandsFuture;
@end

