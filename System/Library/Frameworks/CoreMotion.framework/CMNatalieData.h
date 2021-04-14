/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSUUID, NSDate, NSNumber;

@interface CMNatalieData : CMLogItem {

	long long fRecordId;
	double fStartDate;
	long long fActivityType;
	double fMets;
	double fNatalies;
	double fBasalNatalies;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * mets; 
@property (nonatomic,readonly) NSNumber * natalies; 
@property (nonatomic,readonly) NSNumber * basalNatalies; 
@property (nonatomic,readonly) long long activityType; 
+(BOOL)supportsSecureCoding;
+(id)maxNatalieEntries;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(long long)activityType;
-(id)initWithStartDate:(double)arg1 recordId:(long long)arg2 activityType:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7 ;
-(long long)recordId;
-(NSNumber *)mets;
-(NSNumber *)natalies;
-(NSNumber *)basalNatalies;
-(NSUUID *)sourceId;
@end

