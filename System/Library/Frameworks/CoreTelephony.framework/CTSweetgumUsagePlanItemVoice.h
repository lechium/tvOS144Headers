/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSweetgumUsagePlanItemVoice : NSObject <NSSecureCoding> {

	NSString* _minutesCapacity;
	NSString* _minutesUsed;

}

@property (nonatomic,retain) NSString * minutesCapacity;              //@synthesize minutesCapacity=_minutesCapacity - In the implementation block
@property (nonatomic,retain) NSString * minutesUsed;                  //@synthesize minutesUsed=_minutesUsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)minutesCapacity;
-(NSString *)minutesUsed;
-(void)setMinutesCapacity:(NSString *)arg1 ;
-(void)setMinutesUsed:(NSString *)arg1 ;
@end
