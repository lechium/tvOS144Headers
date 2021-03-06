/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TRISubject, TRISubjectProvider, NSUUID, NSDate, NSArray;

@interface TRITrackingId : NSObject <NSSecureCoding> {

	TRISubject* _subject;
	TRISubjectProvider* _subjectProvider;
	int _projectId;
	NSUUID* _uuid;
	NSDate* _time;
	NSArray* _treatments;

}

@property (nonatomic,readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) NSArray * treatments;              //@synthesize treatments=_treatments - In the implementation block
@property (nonatomic,readonly) TRISubject * subject; 
+(BOOL)supportsSecureCoding;
+(id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2 treatments:(id)arg3 ;
+(id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)time;
-(NSUUID *)uuid;
-(TRISubject *)subject;
-(NSArray *)treatments;
-(id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subjectProvider:(id)arg4 projectId:(int)arg5 ;
-(id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subject:(id)arg4 ;
@end

