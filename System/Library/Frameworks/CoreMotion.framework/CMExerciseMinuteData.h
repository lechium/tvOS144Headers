/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMExerciseMinuteData : NSObject <NSSecureCoding, NSCopying> {

	long long fRecordId;
	double fStartDate;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
+(BOOL)supportsSecureCoding;
+(id)maxExerciseMinuteDataEntries;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(long long)recordId;
-(NSUUID *)sourceId;
-(id)initWithStartDate:(double)arg1 recordId:(long long)arg2 sourceId:(id)arg3 ;
@end

