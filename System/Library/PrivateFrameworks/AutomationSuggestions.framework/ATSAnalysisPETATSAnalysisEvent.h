/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AutomationSuggestions/AutomationSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATSAnalysisPETATSAnalysisEvent : PBCodable <NSCopying> {

	unsigned _absoluteAntecedentSupport;
	unsigned _absoluteConsequentSupport;
	unsigned _absoluteSupport;
	NSString* _activityType;
	NSString* _bundleID;
	float _confidence;
	float _conviction;
	NSString* _feedbackAction;
	NSString* _intentClass;
	float _lift;
	float _rulePowerFactor;
	NSString* _sessionId;
	float _support;
	NSString* _trialID;
	NSString* _trigger;
	unsigned _uniqueDaysLastWeek;
	unsigned _uniqueDaysTotal;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

