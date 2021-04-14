/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression {

	SCRCMathExpression* _base;
	SCRCMathExpression* _subscript;
	SCRCMathExpression* _superscript;

}

@property (nonatomic,retain) SCRCMathExpression * base;                     //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * subscript;                //@synthesize subscript=_subscript - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * superscript;              //@synthesize superscript=_superscript - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isNumber;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)base;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLString;
-(id)subExpressions;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(BOOL)isRangeSubSuperscript;
-(BOOL)isBaseSubSuperscript;
-(void)setSubscript:(SCRCMathExpression *)arg1 ;
-(void)setSuperscript:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)subscript;
-(SCRCMathExpression *)superscript;
-(id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id*)arg3 ;
@end

