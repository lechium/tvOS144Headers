/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <vCard/vCard-Structs.h>
@interface CGImageRefWithFormat : NSObject {

	CGImageRef _imageRef;
	CFStringRef _sourceImageFormatUTI;

}

@property (nonatomic,readonly) CGImageRef imageRef;                           //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) CFStringRef sourceImageFormatUTI;              //@synthesize sourceImageFormatUTI=_sourceImageFormatUTI - In the implementation block
-(CGImageRef)imageRef;
-(id)initWithImage:(CGImageRef)arg1 andFormat:(CFStringRef)arg2 ;
-(CFStringRef)sourceImageFormatUTI;
@end

