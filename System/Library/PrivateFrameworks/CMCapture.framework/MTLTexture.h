/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLTexture <MTLResource>
@property (readonly) id<MTLResource> rootResource; 
@property (readonly) id<MTLTexture> parentTexture; 
@property (readonly) unsigned long long parentRelativeLevel; 
@property (readonly) unsigned long long parentRelativeSlice; 
@property (readonly) id<MTLBuffer> buffer; 
@property (readonly) unsigned long long bufferOffset; 
@property (readonly) unsigned long long bufferBytesPerRow; 
@property (readonly) IOSurfaceRef iosurface; 
@property (readonly) unsigned long long iosurfacePlane; 
@property (readonly) unsigned long long textureType; 
@property (readonly) unsigned long long pixelFormat; 
@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (readonly) unsigned long long depth; 
@property (readonly) unsigned long long mipmapLevelCount; 
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long arrayLength; 
@property (readonly) unsigned long long usage; 
@property (getter=isShareable,readonly) BOOL shareable; 
@property (getter=isFramebufferOnly,readonly) BOOL framebufferOnly; 
@property (readonly) BOOL allowGPUOptimizedContents; 
@property (nonatomic,readonly) SCD_Struct_Fi110 swizzle; 
@required
-(unsigned long long)depth;
-(id<MTLBuffer>)buffer;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)pixelFormat;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)arrayLength;
-(unsigned long long)textureType;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_Fi111)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
-(void)replaceRegion:(SCD_Struct_Fi111)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_Fi111)arg3 mipmapLevel:(unsigned long long)arg4;
-(void)replaceRegion:(SCD_Struct_Fi111)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4;
-(id)newSharedTextureHandle;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_Fi110)arg5;
-(id<MTLResource>)rootResource;
-(id<MTLTexture>)parentTexture;
-(unsigned long long)parentRelativeLevel;
-(unsigned long long)parentRelativeSlice;
-(unsigned long long)bufferOffset;
-(unsigned long long)bufferBytesPerRow;
-(IOSurfaceRef)iosurface;
-(unsigned long long)iosurfacePlane;
-(unsigned long long)sampleCount;
-(unsigned long long)usage;
-(BOOL)isShareable;
-(BOOL)isFramebufferOnly;
-(BOOL)allowGPUOptimizedContents;
-(SCD_Struct_Fi110)swizzle;

@end

