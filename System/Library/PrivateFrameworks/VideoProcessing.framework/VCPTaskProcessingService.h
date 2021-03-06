/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPTaskProcessingClientProtocol.h>

@class NSXPCConnection;

@interface VCPTaskProcessingService : NSObject <VCPTaskProcessingClientProtocol> {

	NSXPCConnection* _connection;

}
+(id)service;
-(id)connection;
-(void)requestImageProcessingTask:(Class)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(void)requestImageProcessingTask:(Class)arg1 forAssetURL:(id)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(id)sandboxExtensionForURL:(id)arg1 error:(id*)arg2 ;
@end

