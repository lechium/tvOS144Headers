/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISConcreteImage : ISImage <NSCopying> {

	BOOL _placeholder;
	CGImageRef _cgImage;
	double _scale;
	CGSize _size;
	CGSize _minimumSize;

}

@property (assign) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(id)_init;
-(double)scale;
-(BOOL)placeholder;
-(CGImageRef)cgImage;
-(void)setPlaceholder:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(void)setMinimumSize:(CGSize)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
@end

