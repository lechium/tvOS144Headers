/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface _UILabelContent : NSObject <NSCopying> {

	NSDictionary* _defaultAttributes;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)length;
-(id)string;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)font;
-(id)backgroundColor;
-(id)shadow;
-(id)textColor;
-(id)attributedString;
-(BOOL)isAttributed;
-(id)paragraphStyle;
-(id)defaultAttributes;
-(BOOL)isWidthVariant;
-(id)contentWithAttributedString:(id)arg1 ;
-(long long)differenceVersusContent:(id)arg1 ;
-(id)contentWithDefaultAttributes:(id)arg1 ;
-(id)initWithDefaultAttributes:(id)arg1 ;
-(id)widthVariantContentForView:(id)arg1 ;
-(id)contentWithString:(id)arg1 ;
-(BOOL)isNil;
-(id)attributedStringContent;
-(BOOL)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2 ;
-(id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2 ;
-(id)defaultValueForAttribute:(id)arg1 ;
-(id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(NSRange)arg3 ;
-(id)contentByAddingAttribute:(id)arg1 toDefaultAttributesWithValue:(id)arg2 ;
-(id)contentByAddingAttributesToDefaultAttributes:(id)arg1 ;
-(BOOL)_isContentEqualToContent:(id)arg1 ;
-(id)contentByCompletingDefaultAttributesWithAttributes:(id)arg1 ;
-(id)_nonNilAttributedString;
-(BOOL)isEqualToContent:(id)arg1 byAttribute:(id)arg2 ;
@end

