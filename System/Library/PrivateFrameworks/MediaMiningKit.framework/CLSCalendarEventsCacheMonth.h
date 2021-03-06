/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject {

	long long _month;
	NSMutableSet* _days;

}

@property (assign,nonatomic) long long month;                    //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) NSMutableSet * days;              //@synthesize days=_days - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)setMonth:(long long)arg1 ;
-(long long)month;
-(NSMutableSet *)days;
-(id)initWithMonth:(long long)arg1 ;
@end

