/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString;

@interface SiriUISuggestionsHeaderText : NSObject <NSCopying> {

	NSString* _regularString;
	NSString* _compactString;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * regularString;                                                           //@synthesize regularString=_regularString - In the implementation block
@property (nonatomic,copy) NSString * compactString;                                                           //@synthesize compactString=_compactString - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                                          //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedStringForMainScreenTraitCollection; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(id)_attributedStringWithString:(id)arg1 ;
-(void)setRegularString:(NSString *)arg1 ;
-(void)setCompactString:(NSString *)arg1 ;
-(NSString *)regularString;
-(NSString *)compactString;
-(id)initWithRegularString:(id)arg1 compactString:(id)arg2 ;
-(NSAttributedString *)attributedStringForMainScreenTraitCollection;
@end

