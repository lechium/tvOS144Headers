/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@interface AirPlayImage : NSObject {

	CGSize _unadjustedSize;
	CGImageRef _image;
	void* _ioSurface;
	int _imageOrientation;
	CGSize _scale;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@property (nonatomic,readonly) void* ioSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) int imageOrientation; 
@property (assign,nonatomic) CGSize scale; 
-(void)dealloc;
-(CGSize)size;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(CGSize)scale;
-(void)setScale:(CGSize)arg1 ;
-(void*)ioSurface;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 decode:(BOOL)arg2 ;
-(id)layerContents;
-(CGAffineTransform)contentsTransformForLayer:(id)arg1 ;
-(void)_setImageOrientation:(int)arg1 ;
-(void)_setIOSurface:(void*)arg1 ;
-(void)_setCGImage:(CGImageRef)arg1 ;
-(CGSize)_unadjustedContentSize;
@end

