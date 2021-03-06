/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class NSString;

@interface _TVImage16x9Decorator : TVImageScaleDecorator {

	NSString* _inlineTitle;

}

@property (nonatomic,copy) NSString * inlineTitle;              //@synthesize inlineTitle=_inlineTitle - In the implementation block
-(NSString *)inlineTitle;
-(void)setInlineTitle:(NSString *)arg1 ;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(id)initWithInlineTitle:(id)arg1 ;
-(id)decoratorIdentifier;
@end

