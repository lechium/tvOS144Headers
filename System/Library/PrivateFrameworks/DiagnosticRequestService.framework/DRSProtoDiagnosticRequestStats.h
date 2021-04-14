/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface DRSProtoDiagnosticRequestStats : PBCodable <NSCopying> {

	NSString* _build;
	NSString* _issueCategory;
	NSString* _issueDescription;
	NSMutableArray* _outcomes;
	NSString* _teamId;

}

@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                         //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) BOOL hasTeamId; 
@property (nonatomic,retain) NSString * teamId;                        //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueCategory; 
@property (nonatomic,retain) NSString * issueCategory;                 //@synthesize issueCategory=_issueCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueDescription; 
@property (nonatomic,retain) NSString * issueDescription;              //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * outcomes;                //@synthesize outcomes=_outcomes - In the implementation block
+(Class)outcomesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)build;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBuild;
-(void)setBuild:(NSString *)arg1 ;
-(NSMutableArray *)outcomes;
-(void)setOutcomes:(NSMutableArray *)arg1 ;
-(NSString *)issueDescription;
-(void)setIssueDescription:(NSString *)arg1 ;
-(NSString *)issueCategory;
-(void)setIssueCategory:(NSString *)arg1 ;
-(void)setTeamId:(NSString *)arg1 ;
-(BOOL)hasTeamId;
-(BOOL)hasIssueCategory;
-(NSString *)teamId;
-(BOOL)hasIssueDescription;
-(void)addOutcomes:(id)arg1 ;
-(unsigned long long)outcomesCount;
-(void)clearOutcomes;
-(id)outcomesAtIndex:(unsigned long long)arg1 ;
@end

