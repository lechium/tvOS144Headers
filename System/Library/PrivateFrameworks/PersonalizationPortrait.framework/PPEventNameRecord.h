/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface PPEventNameRecord : NSObject <NSSecureCoding> {

	unsigned char _changeType;
	NSString* _identifier;
	double _score;
	NSString* _eventIdentifier;
	NSString* _title;
	NSString* _location;
	NSArray* _participantNames;

}

@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double score;                            //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned char changeType;                //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * participantNames;              //@synthesize participantNames=_participantNames - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describeChangeType:(unsigned char)arg1 ;
+(id)eventNameRecordWithScore:(double)arg1 eventIdentifier:(id)arg2 changeType:(unsigned char)arg3 title:(id)arg4 location:(id)arg5 participantNames:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned char)changeType;
-(double)score;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEventIdentifier:(NSString *)arg1 ;
-(NSString *)eventIdentifier;
-(void)setChangeType:(unsigned char)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 eventIdentifier:(id)arg3 changeType:(unsigned char)arg4 title:(id)arg5 location:(id)arg6 participantNames:(id)arg7 ;
-(BOOL)hasScoreSimilarToRecord:(id)arg1 ;
-(BOOL)isEqualToEventNameRecord:(id)arg1 ;
-(NSArray *)participantNames;
-(void)setParticipantNames:(NSArray *)arg1 ;
@end

