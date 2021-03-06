/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BWMetadataSourceNode : BWSourceNode {

	BOOL _running;
	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
-(void)dealloc;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(id)nodeSubType;
-(void)appendMetadataSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

