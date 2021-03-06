/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface RETimeIntervalContentProvider : RETextContentProvider {

	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(id)timeIntervalContentProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)attributedStringRepresentation;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
@end

