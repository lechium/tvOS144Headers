/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSLayoutItem;
#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
@class NSString, NSDictionary, NSMutableArray;

@interface NSLayoutConstraintParser : NSObject {

	NSString* _line;
	const char* _lineChars;
	unsigned long long _lineLength;
	unsigned long long _opts;
	BOOL _useHorizontalArrangement;
	NSDictionary* _metrics;
	NSDictionary* _views;
	id<NSLayoutItem> _containerView;
	NSMutableArray* _constraints;
	NSMutableArray* _unflushedWidthConstraints;
	NSMutableArray* _alignmentConstraints;
	unsigned long long _currentCharacter;
	NSMutableArray* _incompleteConstraints;
	id<NSLayoutItem> _parsedLeftView;
	id<NSLayoutItem> _parsedRightView;
	id<NSLayoutItem> _parsedConstrainedWidthView;

}
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(id)description;
-(void)dealloc;
-(void)parse;
-(id)constraints;
-(id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(void)failWithDescription:(id)arg1 ;
-(void)parseConnection;
-(id)parseView;
-(void)finishConstraint;
-(void)flushWidthConstraints;
-(NSRange)rangeOfName;
-(void)parsePredicateList;
-(void)parsePredicateWithParentheses;
-(void)parsePredicate;
-(void)parseOp;
-(double)parseConstant;
-(void)findContainerView;
@end
