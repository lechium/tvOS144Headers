/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface _UIDatePickerComponent : NSObject {

	unsigned long long _equivalentUnit;
	NSString* _formatString;
	unsigned long long _calendarUnit;
	double _width;
	NSRange _unitRange;

}

@property (nonatomic,readonly) NSString * formatString;                        //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;                //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) unsigned long long equivalentUnit; 
@property (assign,nonatomic) NSRange unitRange;                                //@synthesize unitRange=_unitRange - In the implementation block
@property (assign,nonatomic) double width;                                     //@synthesize width=_width - In the implementation block
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(long long)arg3 ;
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 ;
-(id)description;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(NSString *)formatString;
-(unsigned long long)calendarUnit;
-(id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
-(unsigned long long)equivalentUnit;
-(NSRange)unitRange;
-(void)setUnitRange:(NSRange)arg1 ;
@end

