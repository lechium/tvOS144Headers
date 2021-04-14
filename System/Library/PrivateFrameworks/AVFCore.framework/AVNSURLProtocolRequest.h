/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {

	AVAssetCustomURLBridgeForNSURLProtocol* _bridge;
	CFURLConnectionRef _connection;
	CFErrorRef _error;

}

@property (assign,nonatomic,__weak) AVAssetCustomURLBridgeForNSURLProtocol * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) CFURLConnectionRef connection; 
-(void)dealloc;
-(CFURLConnectionRef)connection;
-(void)setConnection:(CFURLConnectionRef)arg1 ;
-(void)setBridge:(AVAssetCustomURLBridgeForNSURLProtocol *)arg1 ;
-(AVAssetCustomURLBridgeForNSURLProtocol *)bridge;
@end

