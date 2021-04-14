/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGPDFPageContent : _UIImageContent {

	CGPDFPageRef _pdfPageRef;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(CGSize)sizeInPixels;
-(id)initWithScale:(double)arg1 ;
-(BOOL)canProvideFullResCGImage;
-(BOOL)isCGPDFPage;
-(CGPDFPageRef)CGPDFPage;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)initWithCGPDFPage:(CGPDFPageRef)arg1 scale:(double)arg2 ;
@end
