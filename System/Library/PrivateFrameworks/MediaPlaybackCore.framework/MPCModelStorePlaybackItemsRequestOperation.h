/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSProgress, NSOperationQueue, NSObject, MPCModelStorePlaybackItemsRequest;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {

	NSProgress* _activeProgress;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _activeProgressQueue;
	MPCModelStorePlaybackItemsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) MPCModelStorePlaybackItemsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;                                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPCModelStorePlaybackItemsRequest *)request;
-(void)cancel;
-(void)execute;
-(id)responseHandler;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_executeWithUserIdentity:(id)arg1 ;
-(void)_validateUserIdentityForRequestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldUseLegacyAccumulator;
@end

