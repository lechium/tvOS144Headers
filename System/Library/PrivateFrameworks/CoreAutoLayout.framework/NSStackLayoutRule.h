/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSArray, NSString;

@interface NSStackLayoutRule : NSObject <NSLayoutRule> {

	NSArray* _stackedRects;
	double _spacing;
	long long _orientation;

}

@property (copy,readonly) NSArray * stackedRects;                   //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) double spacing;                                //@synthesize spacing=_spacing - In the implementation block
@property (readonly) long long orientation;                         //@synthesize orientation=_orientation - In the implementation block
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
+(id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2 ;
+(id)verticalStackWithRects:(id)arg1 spacing:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSString *)identifier;
-(long long)orientation;
-(double)spacing;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSArray *)stackedRects;
@end

