/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGTextureProviderDelegate
@required
-(void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2;
-(void)textureProvider:(id)arg1 didProvideCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 forRequestID:(int)arg4;
-(void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(CGRect)arg5 forRequestID:(int)arg6;
-(void)textureProvider:(id)arg1 didProvidePixelBuffer:(CVBufferRef)arg2 orientationTransform:(CGAffineTransform)arg3 forRequestID:(int)arg4;
-(void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3;
-(void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1;
-(void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1;

@end

