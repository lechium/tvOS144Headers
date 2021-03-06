/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGPersonResult.h>

@class NSString, NSDate, NSDateComponents;

@interface PGGraphPersonNode : PGGraphOptimizedNode <PGPersonResult> {

	BOOL _isFavorite;
	BOOL _isUserCreated;
	NSString* _name;
	NSString* _localIdentifier;
	NSString* _contactIdentifier;
	NSDate* _birthdayDate;
	NSDate* _potentialBirthdayDate;
	NSDate* _anniversaryDate;
	unsigned long long _sex;
	unsigned long long _ageCategory;

}

@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDateComponents * birthdayDateComponents; 
@property (nonatomic,retain) NSDateComponents * potentialBirthdayDateComponents; 
@property (nonatomic,retain) NSDateComponents * anniversaryDateComponents; 
@property (readonly) BOOL isUserCreated;                                                      //@synthesize isUserCreated=_isUserCreated - In the implementation block
@property (readonly) BOOL isFavorite;                                                         //@synthesize isFavorite=_isFavorite - In the implementation block
@property (readonly) NSString * localIdentifier;                                              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (readonly) NSString * contactIdentifier;                                            //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long sex;                                          //@synthesize sex=_sex - In the implementation block
@property (assign,nonatomic) unsigned long long ageCategory;                                  //@synthesize ageCategory=_ageCategory - In the implementation block
@property (readonly) NSDate * birthdayDate;                                                   //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (readonly) NSDate * potentialBirthdayDate;                                          //@synthesize potentialBirthdayDate=_potentialBirthdayDate - In the implementation block
@property (readonly) NSDate * anniversaryDate;                                                //@synthesize anniversaryDate=_anniversaryDate - In the implementation block
@property (readonly) BOOL belongsToAnySocialGroup; 
@property (readonly) BOOL belongsToBestSocialGroups; 
@property (readonly) BOOL isMeNode; 
@property (readonly) unsigned long long numberOfMomentNodes; 
@property (readonly) double personScore; 
@property (readonly) BOOL isMemberOfMyFamily; 
@property (readonly) BOOL isMyPartner; 
@property (readonly) BOOL isMyChild; 
@property (readonly) BOOL isMyParent; 
@property (readonly) BOOL isMyMother; 
@property (readonly) BOOL isMyFather; 
@property (readonly) BOOL isMySibling; 
@property (readonly) BOOL isMyCoworker; 
@property (readonly) BOOL isMyFriend; 
@property (readonly) BOOL isMyAcquaintance; 
@property (readonly) BOOL isInferredMemberOfMyFamily; 
@property (readonly) BOOL isMyInferredPartner; 
@property (readonly) BOOL isMyInferredChild; 
@property (readonly) BOOL isMyInferredParent; 
@property (readonly) BOOL isMyInferredMother; 
@property (readonly) BOOL isMyInferredFather; 
@property (readonly) BOOL isMyInferredSibling; 
@property (readonly) BOOL isMyInferredCoworker; 
@property (readonly) BOOL isMyInferredFriend; 
@property (readonly) BOOL isMyInferredAcquaintance; 
+(unsigned long long)type;
+(id)filter;
+(id)specialDateForDateComponents:(id)arg1 ;
+(id)_specialDateComponentsForDate:(id)arg1 ;
+(id)personScoreSortDescriptors;
+(id)personSortDescriptors;
+(id)propertiesWithPerson:(id)arg1 ;
+(double)specialDateTimeIntervalForDate:(id)arg1 ;
+(id)partnerOfPerson;
+(id)fatherOfPerson;
+(id)motherOfPerson;
+(id)brotherOfPerson;
+(id)sisterOfPerson;
+(id)daughterOfPerson;
+(id)sonOfPerson;
+(id)parentOfPerson;
+(id)familyOfPerson;
+(id)familySocialGroupOfPerson;
+(id)childOfPerson;
+(id)friendOfPerson;
+(id)coworkerOfPerson;
+(id)coworkerSocialGroupOfPerson;
+(id)acquaintanceOfPerson;
+(id)vipOfPerson;
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(unsigned short)domain;
-(void)setName:(NSString *)arg1 ;
-(id)label;
-(NSString *)contactIdentifier;
-(NSString *)fullName;
-(BOOL)isVerified;
-(BOOL)isFavorite;
-(BOOL)isUserCreated;
-(NSString *)localIdentifier;
-(unsigned long long)ageCategory;
-(void)setAgeCategory:(unsigned long long)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(BOOL)isIdentifiedByProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(id)associatedNodesForRemoval;
-(unsigned long long)sex;
-(void)setSex:(unsigned long long)arg1 ;
-(NSDate *)birthdayDate;
-(NSDate *)potentialBirthdayDate;
-(NSDate *)anniversaryDate;
-(id)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)socialGroupNodes;
-(long long)compareToPerson:(id)arg1 ;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isInferredChild;
-(void)setBiologicalSex:(unsigned long long)arg1 ;
-(BOOL)isMeNode;
-(double)personScore;
-(BOOL)belongsToAnySocialGroup;
-(BOOL)belongsToBestSocialGroups;
-(unsigned long long)numberOfMomentNodes;
-(void)enumerateSocialGroupNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateHomeOrWorkAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateBirthdayMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasRelationshipLabel:(id)arg1 withStatus:(unsigned long long)arg2 ;
-(BOOL)isMemberOfMyFamily;
-(BOOL)isMyPartner;
-(BOOL)isMyChild;
-(BOOL)isMyParent;
-(BOOL)isMyMother;
-(BOOL)isMyFather;
-(BOOL)isMySibling;
-(BOOL)isMyCoworker;
-(BOOL)isMyFriend;
-(BOOL)isMyAcquaintance;
-(BOOL)isInferredMemberOfMyFamily;
-(BOOL)isMyInferredPartner;
-(BOOL)isMyInferredChild;
-(BOOL)isMyInferredParent;
-(BOOL)isMyInferredMother;
-(BOOL)isMyInferredFather;
-(BOOL)isMyInferredSibling;
-(BOOL)isMyInferredCoworker;
-(BOOL)isMyInferredFriend;
-(BOOL)isMyInferredAcquaintance;
-(void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2 ;
-(id)_contactSuggestionEdgesSortedByWeight;
-(id)stringDescription;
-(NSDateComponents *)birthdayDateComponents;
-(NSDateComponents *)potentialBirthdayDateComponents;
-(NSDateComponents *)anniversaryDateComponents;
-(void)setBirthdayDateComponents:(NSDateComponents *)arg1 ;
-(void)setPotentialBirthdayDateComponents:(NSDateComponents *)arg1 ;
-(void)setAnniversaryDateComponents:(NSDateComponents *)arg1 ;
@end

