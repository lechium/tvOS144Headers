/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPRealTimeAnalysisClientProtocol.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol> {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(id)analysisService;
+(id)errorWithStatus:(int)arg1 andDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(CVBufferRef)arg2 withProperties:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
@end
