/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGImageTexture.h>

@interface PXGViewImageTexture : PXGImageTexture {

	BOOL _isOpaque;
	unsigned _orientation;
	CGImageRef _imageRef;

}

@property (nonatomic,readonly) CGImageRef imageRef;               //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) unsigned orientation;              //@synthesize orientation=_orientation - In the implementation block
-(void)dealloc;
-(BOOL)isOpaque;
-(unsigned)orientation;
-(CGSize)pixelSize;
-(CGImageRef)imageRef;
-(int)presentationType;
-(id)initWithImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
-(long long)estimatedByteSize;
@end

