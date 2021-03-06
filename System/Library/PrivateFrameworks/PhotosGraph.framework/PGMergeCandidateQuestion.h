/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSString, PHPerson, NSDictionary;

@interface PGMergeCandidateQuestion : PGSurveyQuestion {

	unsigned short _type;
	unsigned short _displayType;
	unsigned short _state;
	unsigned short _entityType;
	NSString* _entityIdentifier;
	double _score;
	PHPerson* _person;
	NSDictionary* _additionalInfo;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
+(id)questionForPerson:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)type;
-(unsigned short)state;
-(void)remove;
-(PHPerson *)person;
-(double)score;
-(unsigned short)displayType;
-(id)additionalInfo;
-(void)setScore:(double)arg1 ;
-(unsigned short)entityType;
-(id)entityIdentifier;
-(id)initWithPerson:(id)arg1 score:(double)arg2 ;
-(BOOL)isEqualToQuestion:(id)arg1 ;
-(void)persistWithCreationDate:(id)arg1 ;
@end

