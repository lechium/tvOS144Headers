/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/_MTLFence.h>
#import <libobjc.A.dylib/MTLFenceSPI.h>

@protocol MTLDevice;
@class IOGPUMetalDevice, IOGPUMTLFence, NSString;

@interface IOGPUMetalFence : _MTLFence <MTLFenceSPI> {

	IOGPUMetalDevice*<MTLDevice> _device;
	IOGPUMTLFence* _fence;
	unsigned _fenceIndex;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
@end

