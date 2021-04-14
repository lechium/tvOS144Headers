/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBuffer.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugResource, MTLDebugDevice, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable> {

	MTLDebugResource* _common;
	unsigned long long _length;
	MTLDebugDevice* _debugDevice;
	NSMutableArray* _debugMarkers;
	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	BOOL _isContentExposedToCPU;
	const void* _pointer;

}

@property (nonatomic,readonly) MTLDebugResource * common;              //@synthesize common=_common - In the implementation block
@property (nonatomic,readonly) const void* pointer;                    //@synthesize pointer=_pointer - In the implementation block
@property (assign,nonatomic) BOOL isContentExposedToCPU;               //@synthesize isContentExposedToCPU=_isContentExposedToCPU - In the implementation block
-(id)description;
-(void)dealloc;
-(unsigned long long)length;
-(void*)contents;
-(unsigned long long)gpuAddress;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(void)makeAliasable;
-(id)heap;
-(unsigned long long)resourceIndex;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2 ;
-(void)removeAllDebugMarkers;
-(void)didModifyRange:(NSRange)arg1 ;
-(MTLDebugResource *)common;
-(const void*)pointer;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
-(id)copyDebugMarkers;
-(BOOL)isContentExposedToCPU;
-(void)setIsContentExposedToCPU:(BOOL)arg1 ;
@end

