/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	double _lineSpacing;
	double _paragraphSpacing;
	double _headIndent;
	double _tailIndent;
	double _firstLineHeadIndent;
	double _minimumLineHeight;
	double _maximumLineHeight;
	NSArray* _tabStops;
	struct {
		unsigned alignment : 4;
		unsigned lineBreakMode : 4;
		unsigned tabStopsIsMutable : 1;
		unsigned isNaturalDirection : 1;
		unsigned rightToLeftDirection : 1;
		unsigned fixedMultiple : 2;
		unsigned tightensForTruncation : 1;
		unsigned refCount : 18;
	}  _flags;
	double _defaultTabInterval;
	id _extraData;

}

@property (nonatomic,readonly) double lineSpacing; 
@property (nonatomic,readonly) double paragraphSpacing; 
@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) double headIndent; 
@property (nonatomic,readonly) double tailIndent; 
@property (nonatomic,readonly) double firstLineHeadIndent; 
@property (nonatomic,readonly) double minimumLineHeight; 
@property (nonatomic,readonly) double maximumLineHeight; 
@property (nonatomic,readonly) long long lineBreakMode; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@property (nonatomic,readonly) double lineHeightMultiple; 
@property (nonatomic,readonly) double paragraphSpacingBefore; 
@property (nonatomic,readonly) float hyphenationFactor; 
@property (nonatomic,copy,readonly) NSArray * tabStops; 
@property (nonatomic,readonly) double defaultTabInterval; 
@property (nonatomic,readonly) BOOL allowsDefaultTighteningForTruncation; 
@property (nonatomic,readonly) unsigned long long lineBreakStrategy; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(long long)defaultWritingDirectionForLanguage:(id)arg1 ;
+(id)defaultParagraphStyle;
+(long long)_defaultWritingDirection;
+(float)_defaultHyphenationFactor;
-(long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1 ;
-(long long)_ui_resolvedTextAlignment;
-(long long)_ui_resolvedWritingDirection;
-(long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alignment;
-(double)firstLineHeadIndent;
-(double)headIndent;
-(double)tailIndent;
-(NSArray *)tabStops;
-(double)defaultTabInterval;
-(long long)lineBreakMode;
-(double)lineHeightMultiple;
-(double)maximumLineHeight;
-(double)minimumLineHeight;
-(double)lineSpacing;
-(double)paragraphSpacing;
-(double)paragraphSpacingBefore;
-(long long)baseWritingDirection;
-(unsigned long long)_lineBoundsOptions;
-(long long)compositionLanguage;
-(id)textLists;
-(id)textBlocks;
-(unsigned long long)lineBreakStrategy;
-(float)hyphenationFactor;
-(BOOL)allowsDefaultTighteningForTruncation;
-(float)tighteningFactorForTruncation;
-(BOOL)usesDefaultHyphenation;
-(void)_allocExtraData;
-(long long)headerLevel;
-(id)_initWithParagraphStyle:(id)arg1 ;
-(void)_deallocExtraData;
-(BOOL)allowsHangingPunctuation;
-(BOOL)usesOpticalAlignment;
-(BOOL)_isSuitableForFastStringDrawingWithAlignment:(long long*)arg1 mirrorsTextAlignment:(BOOL)arg2 lineBreakMode:(long long*)arg3 tighteningFactorForTruncation:(double*)arg4 ;
@end

