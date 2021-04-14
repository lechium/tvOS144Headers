/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLMenuItemElement.h>

@class NSString, TVLImageElement;

@interface TVLImageTextImageMenuItemElement : TVLMenuItemElement {

	NSString* _imageSeparatorText;
	TVLImageElement* _leftImage;
	TVLImageElement* _rightImage;

}

@property (nonatomic,copy) NSString * imageSeparatorText;               //@synthesize imageSeparatorText=_imageSeparatorText - In the implementation block
@property (nonatomic,retain) TVLImageElement * leftImage;               //@synthesize leftImage=_leftImage - In the implementation block
@property (nonatomic,retain) TVLImageElement * rightImage;              //@synthesize rightImage=_rightImage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(TVLImageElement *)leftImage;
-(void)setLeftImage:(TVLImageElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setImageSeparatorText:(NSString *)arg1 ;
-(void)setRightImage:(TVLImageElement *)arg1 ;
-(NSString *)imageSeparatorText;
-(TVLImageElement *)rightImage;
@end

