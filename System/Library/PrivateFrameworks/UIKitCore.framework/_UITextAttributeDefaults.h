/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextAttributeDefaults.h>
@class _UITextAttributeDictionary, UIColor, UIFont, NSParagraphStyle, NSShadow;


@protocol _UITextAttributeDefaults <NSObject>
@property (nonatomic,copy,readonly) _UITextAttributeDictionary * _attributes; 
@property (nonatomic,readonly) UIColor * _textColor; 
@property (nonatomic,readonly) UIFont * _font; 
@property (nonatomic,readonly) NSParagraphStyle * _paragraphStyle; 
@property (nonatomic,readonly) NSShadow * _shadow; 
@required
-(_UITextAttributeDictionary *)_attributes;
-(UIFont *)_font;
-(UIColor *)_textColor;
-(NSShadow *)_shadow;
-(NSParagraphStyle *)_paragraphStyle;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class _UITextAttributeDictionary, UIColor, UIFont, NSParagraphStyle, NSShadow, _UIMutableTextAttributeDictionary, NSString;

@interface _UITextAttributeDefaults : NSObject <_UITextAttributeDefaults, NSCopying> {

	_UIMutableTextAttributeDictionary* _attributes;

}

@property (setter=_setTextColor:,nonatomic,retain) UIColor * _textColor; 
@property (setter=_setFont:,nonatomic,retain) UIFont * _font; 
@property (setter=_setParagraphStyle:,nonatomic,retain) NSParagraphStyle * _paragraphStyle; 
@property (setter=_setShadow:,nonatomic,retain) NSShadow * _shadow; 
@property (nonatomic,copy,readonly) _UITextAttributeDictionary * _attributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_getFontSizesForUserInterfaceIdiom:(long long)arg1 labelFontSize:(double*)arg2 buttonFontSize:(double*)arg3 systemFontSize:(double*)arg4 smallSystemFontSize:(double*)arg5 ;
+(id)_defaultsForUserInterfaceIdiom:(long long)arg1 ;
+(id)_unspecifiedDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)_init;
-(_UITextAttributeDictionary *)_attributes;
-(UIFont *)_font;
-(UIColor *)_textColor;
-(void)_setFont:(id)arg1 ;
-(NSShadow *)_shadow;
-(void)_setTextColor:(id)arg1 ;
-(void)_setParagraphStyle:(id)arg1 ;
-(id)_initWithFallback:(id)arg1 ;
-(void)_setShadow:(id)arg1 ;
-(NSParagraphStyle *)_paragraphStyle;
@end

