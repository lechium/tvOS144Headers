/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MRLoadable.h>
#import <libobjc.A.dylib/MRRenderable.h>

@class NSDictionary, MRSlideProvider, MRImage, NSString;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {

	NSDictionary* mDescription;
	MRSlideProvider* mSlideProvider;
	MRImage* mInputImage;
	MRImage* mOutputImage;
	NSString* mFrameID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	CGSize mPixelSize;

}

@property (nonatomic,retain) MRImage * inputImage; 
@property (readonly) NSString * frameID; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
+(id)retainedFrameWithFrameID:(id)arg1 forSlideProvider:(id)arg2 ;
-(void)dealloc;
-(void)finalize;
-(void)cleanup;
-(NSDictionary *)attributes;
-(void)unload;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(BOOL)isOpaque;
-(CGSize)pixelSize;
-(MRImage *)inputImage;
-(void)setInputImage:(MRImage *)arg1 ;
-(void)cancelLoading;
-(BOOL)isInfinite;
-(NSString *)frameID;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithFrameID:(id)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;
-(void)retainBySlideProvider:(id)arg1 ;
-(void)releaseBySlideProvider:(id)arg1 ;
-(BOOL)isRetainedBySlideProvider;
@end

