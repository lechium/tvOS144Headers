/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface TVPDurationValueTransformer : NSValueTransformer {

	NSDateComponentsFormatter* _hoursFormatter;
	NSDateComponentsFormatter* _minutesFormatter;

}

@property (nonatomic,retain) NSDateComponentsFormatter * hoursFormatter;                //@synthesize hoursFormatter=_hoursFormatter - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * minutesFormatter;              //@synthesize minutesFormatter=_minutesFormatter - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(NSDateComponentsFormatter *)hoursFormatter;
-(NSDateComponentsFormatter *)minutesFormatter;
-(void)setHoursFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setMinutesFormatter:(NSDateComponentsFormatter *)arg1 ;
@end
