//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTLCommandBufferDescriptor, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MTLCommandQueue <NSObject>
- (void)insertDebugCaptureBoundary;
- (id <MTLCommandBuffer>)commandBufferWithUnretainedReferences;
- (id <MTLCommandBuffer>)commandBufferWithDescriptor:(MTLCommandBufferDescriptor *)arg1;
- (id <MTLCommandBuffer>)commandBuffer;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end

